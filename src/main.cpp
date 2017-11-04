#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
#include <cstdlib>
#include "DealCommand.h"

using namespace std;

int main() {
	string buffer;
	DealCommand* deal = new DealCommand;

	while(true) {
		cout << "$ ";

		getline(cin,buffer);
		deal->changeBuffer(buffer);
		char *temp = (char *)buffer.c_str();
		deal->handleCommands(temp);
	}

	return 0;
}

