#include "Decorator.h"

Decorator::Decorator()
{
    //ctor
}

Decorator::Decorator(base* Child)
{
    this->child = Child;
}

double Decorator::evaluate()
{
    return (child->evaluate());
}
