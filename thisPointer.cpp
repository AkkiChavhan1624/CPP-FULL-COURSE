#include<iostream>
using namespace std;

class A{
    int a;
     public:
      void setData(int a)
      {
        this->a=a;

      }
      void getData()
      {
        cout<<"Enter the value of a is "<<a<<endl;
      }

};

int main()
{
    A a;
    a.setData(24);
    a.getData();

    return 0;
}