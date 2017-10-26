#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <list>
#include <iostream>
#include <numeric>
#include "Container.h"
#include "base.h"

using namespace std;

class ListContainer : public Container
{
    public:
        ListContainer();
        virtual ~ListContainer();

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
        list<base*> list_b;

    private:


};

#endif // LISTCONTAINER_H
