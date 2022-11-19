#include<iostream>
using namespace std;
class BaseClass
{
    public:
     int var_base;
     void display ()
     {
        cout<< "Display Base class variable var_base"<<var_base<<endl;
     }
};

class DerivedClass: public BaseClass{
    public:
      int var_derived;
       void display(){
        cout<< "Display base class variable var_base"<<var_base<<endl;
        cout<< "Display Derived class variable var_derived"<<var_derived<<endl;
          }
};

int main()
{
    BaseClass *base_class_pointer;
     BaseClass obj_base;
     DerivedClass obj_derived;
     base_class_pointer= &obj_derived;
     base_class_pointer->var_base=35;

     base_class_pointer->display();

     base_class_pointer->var_base=3400;
     base_class_pointer->display();

     DerivedClass *derived_class_pointer;
     derived_class_pointer=&obj_derived;

     derived_class_pointer->var_base=16;
    derived_class_pointer->var_derived=24;
     derived_class_pointer->display();

     return 0;

}