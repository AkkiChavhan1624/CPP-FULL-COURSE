#include<iostream>
using namespace std;
 int main()
 {
     int marks[]={23,34,56,34};
     int mathmarks[4];
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

    /* mathmarks[0]=2278;
     mathmarks[2]=729;
     mathmarks[3]=378;
     mathmarks[4]=578;


    cout<<"These are the math marks"<<endl;
     cout<<mathmarks[0]<<endl;
     cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
     cout<<mathmarks[3]<<endl; */

     for(int i=0;i<4;i++)
     {
        cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
     }

     //pointers and arrays

     int *p=marks;
    cout<<*(p+0)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    
     return 0;


 }
