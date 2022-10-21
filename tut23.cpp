#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    friend int distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
};
int distance(point o1,point o2){
    float c;
    c = sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2));
    //dis = sqrt(pow((obj2.x - obj1.x), 2) + pow((obj2.y - obj1.y), 2));
    return c;
}
int main()
{
    point p1(4, 5);
    p1.displaypoint();
    point p2(8, 2);
    p2.displaypoint();
    distance(p1, p2);
    cout << "The distance Between those two point is :" << distance(p1, p2) << endl;
    return 0;
}