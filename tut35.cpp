#include<iostream>
using namespace std;

int count=0;
class num
{
    public:
    num()
    {
      count++;
      cout<<"This is time when constructor is called for object number"<<count<<endl;

    }
    ~num()
    {
        cout<<"this is time when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are in main function"<<endl;
    cout<<"creating first object "<<endl;
    num n1;
    {
        cout<<"Entering the block "<<endl;
        cout<<"creating two more object "<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main function "<<endl;
    return 0;
}