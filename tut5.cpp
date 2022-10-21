#include<iostream>

 using namespace std;

 struct employee
 {
int eId;
char favchar;
float salary;

 };

 union money
 {

    int rice;
    char car;
    float pounds;

 };

 int main()
 { 
    struct employee akki;
    union money m1;
    
    m1.rice=20;
    cout<<m1.rice<<endl;

 akki.eId=1;
 akki.favchar='a';
 akki.salary=500000;
 cout<<"The value is"<<akki.eId<<endl;
 cout<<"The value is"<<akki.favchar<<endl;
 cout<<"The value is"<<akki.salary<<endl;
 return 0;
 }
 