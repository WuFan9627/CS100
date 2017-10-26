#include "ListContainer.h"

ListContainer::ListContainer()
{
    //ctor
}

ListContainer::~ListContainer()
{
    //dtor
}

void ListContainer::add_element(base* element)
{
    list_b.push_back(element);
}

void ListContainer::print()
{
    list<base*>::iterator i;
    for(i = list_b.begin(); i != list_b.end(); i++)
    {
        cout<<' '<<(*i)->evaluate();
    }
    cout<<endl;
}

void ListContainer::sort()
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

void ListContainer::swap(int i,int j)
{
    list<base*>::iterator a;
    a = list_b.begin();
    for(int k = 0; k < i; k++)
    {
        a++;
    }

    list<base*>::iterator b;
    b = list_b.begin();
    for(int k = 0; k < j; k++)
    {
        b++;
    }


    base* tmp_base;
    tmp_base = (*a);
    (*a) = (*b);
    (*b) = tmp_base;
}

int ListContainer::size()
{
    return list_b.size();
}

base* ListContainer::at(int i)
{
    list<base*>::iterator a;
    a = list_b.begin();
    for(int k = 0; k < i; k++)
    {
        a++;
    }
    return (*a);
}
