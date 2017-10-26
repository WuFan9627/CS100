#include "Absolutevalue.h"

Absolutevalue::Absolutevalue(base* child)
{
    this->child = child;
}

double Absolutevalue::evaluate()
{
    Decorator::evaluate();
    double p = function_of_decorator(this->child);
    cout << "Absolute value:" << p << endl;
    return p;
}

double Absolutevalue::function_of_decorator(base* get_evaluate)
{
    return abs(get_evaluate->evaluate());
}
