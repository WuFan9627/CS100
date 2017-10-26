#ifndef CEILING_H
#define CEILING_H

#include "Decorator.h"
#include "base.h"


class Ceiling : public Decorator
{
    public:
        Ceiling(base* child);

        virtual double evaluate();
        double function_of_decorator(base* get_evaluate);

    protected:

    private:

};

#endif // CEILING_H
