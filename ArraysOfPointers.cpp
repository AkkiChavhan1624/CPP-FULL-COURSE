#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    int setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item" << id << endl;
        cout << "Price of this item " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << " Enter Id and Price of The item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Enter Item :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}