#include <iostream>
using namespace std;

class student
{
public:
    string Name;
    int RollNo;
    int Section;

    void printdetails()
    {
        cout << "Name Of Student : " << Name << endl;
        cout << "Roll No of Student : " << RollNo<<endl;
        cout << "The section is : " << Section << endl;
    }
};

int main()
{
    student student_1;
    student_1.Name = "Angel";
    student_1.RollNo = 24;
    student_1.Section = 2;
    student_1.printdetails();
    return 0;
}