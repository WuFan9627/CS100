//
//  main.cpp
//  class VectorContainer
//
//  Created by Wu Fan on 18/10/2017.
//  Copyright © 2017 fan wu. All rights reserved.
//

#include <iostream>
// #include necessary classes

using namespace std;

int main() {
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Mult* A = new Mult(op7, op4);
    Add* B = new Add(op3, A);
    Sub* C = new Sub(B, op2);
    Sqr* D = new Sqr(C);
    
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
};






class Container {
protected:
    Sort* sort_function;
public:
    /* Constructors */
    Container() : sort_function(NULL){ }
    Container(Sort* function) : sort_function(function){ }
    /* Non Virtual Functions */
    void set_sort_function(Sort* sort_function); // Set the type of sorting algorithm
    /* Pure Virtual Functions */
    // insert the top pointer of the tree into the container
    virtual void add_element(Base* element) = 0;
    // iterate through trees and output values
    virtual void print() = 0;
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort() = 0;
    /* Essentially the only functions needed to sort */
    // switch tree locations
    virtual void swap(int i,int j) = 0;
    // get the top pointer of tree at index i
    virtual Base* at(int i) = 0;
    // return the container size
    virtual int size() = 0;
};







class VectorContainer: Container {
    
    
};




class Listcontainer: Container {
    
    
};





class Sort {
public:
    /* Constructors */
    Sort();
    /* Pure Virtual Functions */
    virtual void sort(Container* container) = 0;
};



class SelectionSort: Sort {
    void SelectionSort(apvector <int> &num)
    {
        int i, j, first, temp;
        int numLength = num.length( );
        for (i= numLength - 1; i > 0; i--)
        {
            first = 0;                 // initialize to subscript of first element
            for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
            {
                if (num[j] < num[first])
                    first = j;
            }
            temp = num[first];   // Swap smallest found with element in position i.
            num[first] = num[i];
            num[i] = temp;
        }
        return;
    }
};


class BubbleSort: Sort {
    void BubbleSort(apvector <int> &num)
    {
        int i, j, flag = 1;    // set flag to 1 to start first pass
        int temp;             // holding variable
        int numLength = num.length( );
        for(i = 1; (i <= numLength) && flag; i++)
        {
            flag = 0;
            for (j=0; j < (numLength -1); j++)
            {
                if (num[j+1] > num[j])      // ascending order simply changes to <
                {
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
                }
            }
        }
        return;   //arrays are passed to functions by address; nothing is returned
    }
};

