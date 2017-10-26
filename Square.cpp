#include "Square.h"



Square::Square()

{

    //ctor

}



Square::Square(base* Child)

{

    this->child = Child;

}



double Square::evaluate()

{

    return (child->evaluate()*child->evaluate());
}
