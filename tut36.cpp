#include<new>
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
      cout<<"A::A()"<<endl;
    }
    ~A()
    {
        cout<<"A::A()"<<endl;
    }
};
int main()
{
    char *p=new char[sizeof(A)];
    A* ap=new(p) A;
    ap->A::~A();
    delete[] p;
    return 0;
}