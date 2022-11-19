#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    int setdata(int i, int j)
    {
        real = i;
        imaginary = j;
    }
    void getdata(void)
    {
        cout << "The value of real is " << real << endl;
        cout << "The value of imaginary is " << imaginary << endl;
        cout << "The value of imaginary is " << imaginary + real << endl;
    }
};
int main()
{
    // Complex akki;
    // akki.setdata(16,24);
    // akki.getdata();

    Complex *ptr = new Complex[6];
    ptr->setdata(5, 8);
    ptr->getdata();

    return 0;
}