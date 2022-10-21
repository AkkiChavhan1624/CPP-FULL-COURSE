#include<iostream>
using namespace std;
class Room
{
    private:
     double length;
     double breadth;
     double height;
   public:

   void initdata(double len,double brth,double hgt)
   {
length=len;
breadth=brth;
height=hgt;
}

 double calculateArea()
    {
        return length*height;
    }
   
   double calculateVolume()
   {
return length*breadth*height;

   }

};
 
  int main()
{
    Room room1;

    room1.initdata(42.5,30.8,19.2);

    cout<<"The Area of Room= "<<room1.calculateArea()<<endl;
    cout<<"The Volume of Room ="<<room1.calculateVolume()<<endl;
    return 0;
}