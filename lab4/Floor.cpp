#include "Floor.h"

Floor::Floor(base* child)
{
    this->child = child;
}

double Floor::evaluate()
{
    Decorator::evaluate();
    double p = function_of_decorator(this->child);
    cout << "Floor value:" << p << endl;
    return p;
}

double Floor::function_of_decorator(base* get_evaluate)
{
    return floor(get_evaluate->evaluate());
}
