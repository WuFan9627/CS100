#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H
#include <vector>
#include <iostream>
#include "Container.h"
#include "base.h"

using namespace std;

class VectorContainer : public Container
{
    public:
        VectorContainer();
        virtual ~VectorContainer();

        virtual void add_element(base* element);
        // iterate through trees and output values
        virtual void print();
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        virtual void sort();
        /* Essentially the only functions needed to sort */
        // switch tree locations
        virtual void swap(int i,int j);
        // get the top pointer of tree at index i
        virtual base* at(int i);
        // return the container size
        virtual int size();




    protected:
        std::vector<base*> vec_b;

    private:
};

#endif // VECTORCONTAINER_H
