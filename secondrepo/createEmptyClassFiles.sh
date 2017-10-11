echo "$1"
echo " 
#ifndef MyClass_hh
#define MyClass_hh

class MyClass
{
  public:
    MyClass();
    ~MyClass();

  private:
};
#endif" > MyClass.hh

echo "
#include "./MyClass.hh"

MyClass::MyClass()
{}

MyClass::~MyClass()
{}" > MyClass.cc
