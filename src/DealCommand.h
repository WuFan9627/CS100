#ifndef DEALCOMMAND_H
#define DEALCOMMAND_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
#include <cstdlib>


using namespace std;

const int MAX_ARGS = 256;

class DealCommand
{
    public:
        DealCommand();
        int executeCommands(char **argv);
        void verificationConnector(int prev, char **parsedTokens, char *statements);
        void handleCommands(char *commands);
        void changeBuffer(string &buffer);



    protected:

    private:
};

#endif // DEALCOMMAND_H
