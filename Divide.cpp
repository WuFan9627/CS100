#include "Divide.h"



Divide::Divide()

{

    //ctor

}



Divide::Divide(base* Left_child, base* Right_child)

{

    this->left_child = Left_child;

    this->right_child = Right_child;

}



double Divide::evaluate()

{

    return (left_child->evaluate()/right_child->evaluate());

}
