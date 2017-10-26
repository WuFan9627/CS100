#ifndef DIVIDE_H
#define DIVIDE_H

#include "base.h"


class Divide : public base
{
public:
    Divide();
    Divide(base*  Left_child, base*  Right_child);

    virtual double evaluate();

protected:

private:
    base* left_child;
    base* right_child;
};

#endif // DIVIDE_H
