#ifndef ADD_H
#define ADD_H

#include "base.h"


class Add : public base
{
    public:
        Add();
        Add(base* Left_child, base* Right_child);

        virtual double evaluate();


    protected:

    private:
        base* left_child;
        base* right_child;
};

#endif // ADD_H
