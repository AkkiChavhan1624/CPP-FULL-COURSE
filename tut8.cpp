#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2)+(n-1);
}

int main()
{
int a;
cout<<"Enter the number:"<<endl;
cin>>a;
cout<<"The factorial of "<<a<< " is \t" <<factorial(a)<<endl;
cout<<"The fibbonacci sequence at this position is "<<fib(a);
return 0;

}