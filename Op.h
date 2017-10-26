#ifndef OP_H
#define OP_H

#include "base.h"





class Op : public base

{

    public:

        Op();

        Op(double Value);



        virtual double evaluate();



    protected:



    private:

        double value;

};



#endif // OP_H#endif
