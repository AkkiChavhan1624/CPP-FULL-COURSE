#include<iostream>
 using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int sum(int a,int b,int c)
{

    return a=b+c;
}

// The volume of cylinder 
int volume( double r,int h)
{
    return (3.14*r*r*h);
}

// The volume of cube 

int volume(int a)
{
    return (a*a*a);
}

// The volume of retangular box 

int volume(int l,int b,int h)
{
    return (l*b*h);
}


 int main()
{
// cout<<"The sum of 3 and 6 is="<<sum(3,6)<<endl;
 //cout<<"The sum of 3,7 and 6="<<sum(3,7,6)<<endl;
 cout<<"The volume of cylinder lenght 3 and height 6 is="<<volume(3,60)<<endl;
 cout<<"The volume of cuboid is="<<volume(3)<<endl;
 cout<<"The volue of rectangular box is="<<volume(3,7,6)<<endl;
 return 0;
  

 return 0;
}