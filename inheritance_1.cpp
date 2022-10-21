#include<iostream>
using namespace std;

//Base Class creating
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=34.0;
    }
    Employee(){}

};

//Creating Derived Class 
class Programmer : public Employee{
public:
int languageCode;
Programmer(int inpId)
{
    id=inpId;
    languageCode=9;
}
void getdata()
{
    cout<<id<<endl;
}
};

int main()
{
    Employee akki(1),vaibhav(2);

    // cout<<akki.id<<endl;
    cout<<akki.salary<<endl;

    // cout<<vaibhaouv.id<<endl;
    cout<<vaibhav.salary<<endl;

    Programmer skillF(10);

    cout<<skillF.languageCode<<endl;
    // cout<<skillF.id<<endl;
    skillF.getdata();

    return 0;
}
