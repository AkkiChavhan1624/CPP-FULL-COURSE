#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Display the variable of base class " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << " display the variable of base class " << var_base << endl;
        cout << "display the vaiable of derived class" << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display();
    return 0;
}