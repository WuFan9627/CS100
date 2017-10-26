#include "Add.h"

Add::Add()
{
    //ctor
}

Add::Add(base* Left_child, base* Right_child)
{
    this->left_child = Left_child;
    this->right_child = Right_child;
}

double Add::evaluate()
{
    return (left_child->evaluate() + right_child->evaluate());
}
