#include<iostream>
using namespace std;
class Room
{
   public:
   double length;
   double breadth;
   double height;
   
   double calculateArea()
   {
     cout<<"The Area Of Room is ="<<length* breadth<<endl;
    return 0;
    // return length* breadth;
   }
   double calculateVolume()
   {
     cout<<"caluclate Volume of Room is ="<<length*breadth*height<<endl;
    return 0;
    // return length*breadth*height;
   }
};
  
   int main()
   {
      Room room1;

    room1.length=42.5;
    room1.breadth=30.8;
    room1.height=19.2;
    room1.calculateArea();
    room1.calculateVolume();

    // cout<<"Area of Room ="<<room1.calculateArea()<<endl;
    // cout<<"Volume of Room ="<<room1.calculateVolume()<<endl;
    return 0;

   }