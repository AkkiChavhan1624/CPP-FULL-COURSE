#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};
void Shop :: setPrice(void)
{
    cout << "Enter Id of your item no:" << endl;
    cin >> itemId[counter];
    cout << "Enter the Price Of your item:" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id\t" << itemId[i] << "\tis\t" <<itemPrice[i] << endl;
    }
}
int main()
{
    Shop morya;
    morya.initcounter();
    morya.setPrice();
    morya.setPrice();
    morya.setPrice();
    morya.displayPrice();
    return 0;
}