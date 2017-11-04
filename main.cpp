#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_ARGS = 256;

int runCommands(char **argv) {

	int status;
	pid_t pid;

	pid = fork();

	if(pid < 0) {
		perror("Error: pid < 0!");
		return 0;
	}
	else if(pid == 0) {
		if(execvp(*argv, argv) < 0) {
			perror("execvp error!");
			return 0;
		}
	}
	while(wait(&status) != pid)
		;
	return 1;
}

void verificationConnector(int value, char **parsedTokens, char *statements) {

	if(strcmp(statements, "&&") == 0) {
		if(value){
            verificationConnector(1, parsedTokens, strtok(0, " "));
		}
	} else if(strcmp(statements, "||") == 0) {
		if(!value){
            verificationConnector(1, parsedTokens, strtok(0, " "));
		}
	} else if(statements == 0 || *statements == '#') {
		return;
	} else if(strcmp(statements, "exit") == 0) {
		exit(0);
	} else {
		int i;
		char *next = strtok(0, " ");
		*parsedTokens = statements;
		for(i = 1; next && *next != '#' && strcmp(next, "&&") && strcmp(next, "||"); i++) {
			parsedTokens[i] = next;
			next = strtok(0, " ");
		}

		verificationConnector(runCommands(parsedTokens), parsedTokens + i + 1, next);
	}
}

void handleCommands(char *commands) {
	char *statements[MAX_ARGS] = {0};
	char *parsedTokens[MAX_ARGS] = {0};
	int i = 0;

	for(char *tok = strtok(commands, ";"); tok; tok = strtok(0, ";")) {
		statements[i] = tok;
		i++;
	}

	for(int i = 0; statements[i]; i++) {
		verificationConnector(1, parsedTokens, strtok(statements[i], " "));
		for(int j = 0; parsedTokens[j]; j++) {
			parsedTokens[j] = 0;
		}
	}
}

void changeBuffer(string &buffer) {
	for(size_t i = 2; i < buffer.length(); i++) {
		if(buffer[i] == '&' && buffer[i - 1] == '&' && buffer[i - 2] != ' ') {
			buffer = buffer.substr(0, i - 1) + " && " + buffer.substr(i + 1);
			i+=2;
		} else if(buffer[i] == '|' && buffer[i - 1] == '|' && buffer[i - 2] != ' ') {
			buffer = buffer.substr(0, i - 1) + " || " + buffer.substr(i + 1);
			i+=2;
		} else if(buffer[i] == '#' && buffer[i - 1] != ' ') {
			buffer = buffer.substr(0, i - 1) + + " #" + buffer.substr(i + 1);
			i+=2;
		}
	}
}


int main() {
	string buffer;

	while(true) {
		cout << "$ ";
		getline(cin,buffer);
		changeBuffer(buffer);
		char *temp = (char *)buffer.c_str();
		handleCommands(temp);
	}

	return 0;
}

