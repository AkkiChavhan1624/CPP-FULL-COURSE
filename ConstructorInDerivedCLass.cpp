#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 Class Constructor Called " << endl;
    }
    void printdata1(void)
    {
        cout << "The value of Data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 Class Constructor Called " << endl;
    }
    void printdata2(void)
    {
        cout << "The value of Data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived Class Constructor Called " << endl;
    }
    void printdata3(void)
    {
        cout << "The value of Derived1 is " << derived1 << endl;
        cout << "The value of Derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived akki(12, 16, 24, 5);
    akki.printdata1();
    akki.printdata2();
    akki.printdata3();

    return 0;
}