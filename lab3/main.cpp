#include <iostream>
#include "Add.h"
#include "Divide.h"
#include "Multiply.h"
#include "Square.h"
#include "Subtract.h"
#include "Op.h"
#include "base.h"
#include "Sort.h"
#include "Container.h"
#include "VectorContainer.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "ListContainer.h"


using namespace std;

int main()
{

    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Multiply* A = new Multiply(op7, op4);
    Add* B = new Add(op3, A);
    Subtract* C = new Subtract(B, op2);
    Square* D = new Square(C);

    VectorContainer* container = new VectorContainer();
    container->add_element(A);
    container->add_element(B);
    container->add_element(C);
    container->add_element(D);

    cout << "Container Before Sort: " << endl;
    container->print();

    cout << "Container After Sort: " << endl;
    container->set_sort_function(new SelectionSort());
    container->sort();
    container->print();

    return 0;
}
