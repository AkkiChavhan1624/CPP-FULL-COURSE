#include<iostream>
using namespace std;

class test{
public:
 test()
 {
    cout<<"\n constructor execute ";
 }
 ~test()
 {
    cout<<"\n destructor execute";
 }
};
int main()
{
    test t;
    return 0;
}