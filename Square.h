#ifndef SQUARE_H

#define SQUARE_H



#include "base.h"





class Square : public base

{

    public:

        Square();

        Square(base* Child);



        virtual double evaluate();



    protected:



    private:

        base* child;

};



#endif // SQUARE_H
