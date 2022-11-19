#include<iostream>
using namespace std;

class Item{
    char name[30];
    int price;
     public:
       void GetItem();
       void  PrintItem();
};

void Item::GetItem()
{
    cout<<"Item Name "<<endl;
    cin>>name;
    cout<<"Price "<<endl;
    cin>>price;
}

void Item:: PrintItem()
{
     cout<<"Name "<<name<<endl;
     cout<<"Price "<<price<<endl;

}

int main()
{
    
    const int size=3;
    Item t[size];


    for ( int i = 0; i < size; i++)
    {
        cout<<" Item "<<i+1<<endl;
        t[i].GetItem();
     }
    for (int i = 0; i < size; i++)
    {
         cout<< " Item Details : "<<i+1<<endl;
         t[i].PrintItem();
    }
    return 0;
}