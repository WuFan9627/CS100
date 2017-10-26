#ifndef MULTIPLY_H
#define MULTIPLY_H

#include "base.h"


class Multiply : public base
{
    public:
        Multiply(base* Left_child, base* Right_child);

        virtual double evaluate();

    protected:

    private:
        base* left_child;
        base* right_child;
};

#endif // MULTIPLY_H
