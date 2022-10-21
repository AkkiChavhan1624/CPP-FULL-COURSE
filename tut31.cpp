#include <iostream>
using namespace std;

class akki
{
    int data1;
    int data2;
    int data3;

public:
    akki(int a, int b = 16, int c = 24)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void akki::printData()
{
    cout << "The value of Data1 and Data2 and data3 is " << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    akki a(12);
    a.printData();
    return 0;
}