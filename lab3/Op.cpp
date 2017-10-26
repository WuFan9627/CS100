#include "Op.h"

Op::Op()
{
    //ctor
}

Op::Op(double Value)
{
    this->value = Value;
}

double Op::evaluate()
{
    return value;
}
