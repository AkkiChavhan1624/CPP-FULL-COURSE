#include<iostream>
using namespace std;

class Person
{
   int Id;
   char name[20];

   public:
     void set_P()
     {
        cout<<"Enter the Id ";
        cin>>Id;
        cout<<"Enter the Name ";
        cin>>name;
     }
     void display_P()
     {
        cout<<endl<<Id<<"\t"<<name<<"\t";
     }
};

class student : private Person{
    char course[50];
    int fee;

    public:

    void set_S()
    {
        set_P();
        cout<<"Enter the course name "<<endl;
        fflush(stdin);
        cin.getline(course,50);
        cout<<"Enter the course Fee "<<endl;
        cin>>fee;

    }
    void display_S()
    {
        display_P();
        cout<<course<<"\t"<<fee<<"\t";
    }
};
int main()
{
   student s;
   s.set_S();
   s.display_S();
   return 0;
}