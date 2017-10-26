#ifndef DECORATOR_H
#define DECORATOR_H

#include <cmath>
#include <iostream>
#include "base.h"

using namespace std;

class Decorator : public base
{
    public:
        Decorator();
        Decorator(base* Child);

        virtual double evaluate();

    protected:
        base* child;


    private:


};

#endif // DECORATOR_H
