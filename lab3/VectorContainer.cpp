#include "VectorContainer.h"

VectorContainer::VectorContainer()
{
    //ctor
}

VectorContainer::~VectorContainer()
{
    //dtor
}

void VectorContainer::add_element(base* element)
{
    vec_b.push_back(element);
}

void VectorContainer::print()
{
    int i;
    for(i = 0; i < vec_b.size(); i++)
    {
        cout<<' '<<vec_b.at(i)->evaluate();
    }
    cout<<endl;
}

void VectorContainer::sort()
{
    if(sort_function != NULL)
    {
        sort_function->sort(this);
    }
    else
    {
        cout<<"Error: sort_function is null!\n";
    }
}

void VectorContainer::swap(int i,int j)
{
    base* tmp_base;
    tmp_base = vec_b.at(i);
    vec_b[i] = vec_b.at(j);
    vec_b[j] = tmp_base;
}

int VectorContainer::size()
{
    return vec_b.size();
}

base* VectorContainer::at(int i)
{
    return vec_b[i];
}
