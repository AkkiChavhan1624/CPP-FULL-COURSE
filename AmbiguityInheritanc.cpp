#include<iostream>
using namespace std;

class Base1
{
   public:
     void greet()
     {
        cout<<"How are you "<<endl;
     }
};

class Base2
{
    public:
    void greet()
    {
       cout<<"Kaise ho? "<<endl;
    }
};

class Derived: public Base1,public Base2
{
    public:
       void greet()
       {
        Base2::greet();
       }
};

int main()
{
    Base1 obj1;
    Base2 obj2;
    Derived d;
    
    obj1.greet();
    obj2.greet();
    d.greet();

    return 0;
}    