
#ifndef Absolutevalue_hpp
#define Absolutevalue_hpp

#include <iostream>
#include <stdio.h>
#include "Decorator.h"
#include "base.h"

using namespace std;

class Absolutevalue : public Decorator
{
public:
    Absolutevalue(base* child);

    virtual double evaluate();
    double function_of_decorator(base* get_evaluate);

protected:

private:

};


#endif /* Absolutevalue_hpp */
