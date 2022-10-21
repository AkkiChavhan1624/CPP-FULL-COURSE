#include<iostream>
using namespace std;

//Function prototype 
//Type Function  name (argument)
int sum(int,int);

int main()
{
    int num1,num2;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Entetr the second number :"<<endl;
    cin>>num2;
    //num1 and num2 atual parameters

    cout<<"sum is : "<<sum(num1,num2);
    return 0;
}
int sum(int a,int b){
    //Formal parameters a and will be taking values from actual parameters num1 and num2
 int c=a+b;
 return c;
}
