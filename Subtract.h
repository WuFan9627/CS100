#ifndef SUBTRACT_H

#define SUBTRACT_H



#include "base.h"





class Subtract : public base

{

    public:

        Subtract();

        Subtract(base* Left_child, base* Right_child);



        virtual double evaluate();



    protected:



    private:

        base* left_child;

        base* right_child;

};



#endif // SUBTRACT_H
