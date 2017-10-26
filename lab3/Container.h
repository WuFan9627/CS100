#ifndef CONTAINER_H
#define CONTAINER_H
#include <cstddef>
#include "Sort.h"
#include "base.h"

class Sort;
class Container
{
    protected:
    Sort* sort_function;

    public:
    /* Constructors */
    Container() : sort_function(NULL){ }
    Container(Sort* function) : sort_function(function){ }
    /* Non Virtual Functions */
    void set_sort_function(Sort* sort_function_get); // Set the type of sorting algorithm
    /* Pure Virtual Functions */
    // insert the top pointer of the tree into the container
    virtual void add_element(base* element) = 0;
    // iterate through trees and output values
    virtual void print() = 0;
    // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
    virtual void sort() = 0;
    /* Essentially the only functions needed to sort */
    // switch tree locations
    virtual void swap(int i,int j) = 0;
    // get the top pointer of tree at index i
    virtual base* at(int i) = 0;
    // return the container size
    virtual int size() = 0;
};

#endif // CONTAINER_H
