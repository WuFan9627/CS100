#ifndef FLOOR_H
#define FLOOR_H

#include <iostream>
#include "Decorator.h"
#include "base.h"

using namespace std;

class Floor : public Decorator
{
public:
    Floor(base* child);

    virtual double evaluate();
    double function_of_decorator(base* get_evaluate);

protected:

private:

};

#endif // Floor_H
