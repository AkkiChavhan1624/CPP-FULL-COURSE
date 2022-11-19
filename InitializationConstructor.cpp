#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
      // test(int i,int j):a(i),b(j)
      test(int i,int j):a(i),b(a+j)
      {
        cout<< "Constructor Executed"<<endl;        
        cout<< "The value of a is "<<a<<endl;        
        cout<< "The value of b is "<<b<<endl;        

      }
};

int main()
{
    test akki(12,24);
    return 0;
}