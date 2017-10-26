#ifndef SORT_H
#define SORT_H
#include "Container.h"

class Container;
class Sort{
  public:
    /* Constructors */
    Sort();
    /* Pure Virtual Functions */
    virtual void sort(Container* container) = 0;
};

#endif // SORT_H
