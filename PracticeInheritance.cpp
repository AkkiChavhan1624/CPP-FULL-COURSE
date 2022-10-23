#include <iostream>
using namespace std;

class SimpleCal
{
protected:
    int x1, y1;
    float sum, sub, diff, div;

public:
    void set1(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void process()
    {
        sum = x1 + y1;
        sub = x1 - y1;
        diff = x1 * y1;
        div = x1 / y1;
    }
    void display()
    {
        cout << " Addition is " << sum << endl;
        cout << " Substraction is " << sub << endl;
        cout << " Multiolication is " << diff << endl;
        cout << " Division is " << div << endl;
    }
};

class ScientificCal
{
protected:
    int x2, y2;
    int sqr1, sqr2, cube1, cube2;

public:
    void set2(int a, int b)
    {
        x2 = a;
        y2 = b;
    }
    void process2()
    {
        sqr1 = x2 * x2;
        sqr2 = y2 * y2;
        cube1 = x2 * x2 * x2;
        cube2 = y2 * y2 * y2;
    }
    void display2()
    {
        cout << "Square of X2 is " << sqr1 << endl;
        cout << "Square of y2 is " << sqr2 << endl;
        cout << "Cube of X2 is " << cube1 << endl;
        cout << "Cube of Y2 is " << cube2 << endl;
    }
};

class Hybridcalculator : public SimpleCal, public ScientificCal
{
public:
    void Show()
    {

        process();
        display();
        process2();
        display2();
    }
};

int main()
{
    int p, q;
    cout << "Enter the Two Number " << endl;
    cin >> p >> q;

    Hybridcalculator akki;
    akki.set1(p, q);
    akki.set2(p, q);
    akki.Show();

    return 0;
}