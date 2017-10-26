#include "SelectionSort.h"

SelectionSort::SelectionSort()
{

}


void SelectionSort::sort(Container* container)
{
    int i, j, first;
      int numLength = container->size();
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (container->at(j)->evaluate() > container->at(first)->evaluate())
                 first = j;
          }
         container->swap(first,i);
     }
}
