#include "Ceiling.h"

Ceiling::Ceiling(base* child)
{
    this->child = child;
}

double Ceiling::evaluate()
{
    Decorator::evaluate();
    double p = function_of_decorator(this->child);
    cout << "Ceil value:" << p << endl;
    return p;
}

double Ceiling::function_of_decorator(base* get_evaluate)
{
    return ceil(get_evaluate->evaluate());
}
