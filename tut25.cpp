#include<iostream>
using namespace std;

class wall
{
    private :

    double length;
    double height;
  
    public:
    wall(double len,double hgt)
    {
        length=len;
        height=hgt;
    }
   

   double calculatearea()
    {
        return length*height;
    }
};
int main()
{
    wall wall1(10.5,8.6);
    wall wall2(8.6,5.9);

    cout<<"Area of wall:"<<wall1.calculatearea()<<endl;
    cout<<"Area of wall:"<<wall2.calculatearea()<<endl;
    
    return 0;

}