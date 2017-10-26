#include "Multiply.h"





Multiply::Multiply(base* Left_child,base* Right_child)

{

    this->left_child = Left_child;

    this->right_child = Right_child;

}



double Multiply::evaluate()

{

    return (left_child->evaluate()*right_child->evaluate());
