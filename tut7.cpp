#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    static int c = 0;
    c = c + 1;

    return a * b + c;
}

float moneyReceive(int currentMoney, float factor = 1.04)
{
    return currentMoney*factor;
}
int main()
{
    //int a, b;
   // cout << "Enter the value of a and b" << endl;
    //cin >> a >> b;
   // cout << "The product of a and b is :" << product(a, b);
   int money=10000;
   cout<<"If you have "<<money<<"Rs in your bank account, you wiil receive "<<moneyReceive(money)<<"Rs after 1 year";
   cout<<" For VIP : If you have "<<money<<"Rs in your bank account, you wiil receive "<<moneyReceive(money,1.1)<<"Rs after 1 year";
   return 0;
}