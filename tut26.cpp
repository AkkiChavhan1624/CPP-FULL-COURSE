#include<iostream>
using namespace std;

class akki
{
    private:
    int a,b;
   public:
    akki(int x,int y)
    {
      a=x;
      b=y;
      cout<<"Enter the number"<<endl;
      cout<<"add is\n"<<x+y; 
    }
};

int main()
{
    akki b1=akki(5,9);
    return 0;
}