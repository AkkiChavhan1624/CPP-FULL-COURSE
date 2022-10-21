#include<iostream>
using namespace std;

class bankdeposit
{
   private:
   int principal;
   int years;
   float interestRate;
   float returnvalue;

   public:
   bankdeposit(){}
   bankdeposit(int p,int y,float r);
   bankdeposit(int p,int y,int r);

   void show();
};
bankdeposit::bankdeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestRate=r;
    returnvalue=principal;
    for(int i=0;i<years;i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }
}
bankdeposit::bankdeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnvalue=principal;
    for(int i=0;i<years;i++)
    {
        returnvalue=returnvalue*(1+interestRate);
    }

}
void bankdeposit::show()
{
    cout<<"Principal amount was "<<principal
    <<" Return value After "<<years
    <<"years is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p,y and r "<<endl;
    cin>>p>>y>>r;

    bd1=bankdeposit(p,y,r);
    bd1.show();
   
    cout<<"Enter the value of p,y and R "<<endl;
    cin>>p>>y>>R;

    bd2=bankdeposit(p,y,R);
    bd2.show();

    cout<<"Enter the value of p,y and r "<<endl;
    cin>>p>>y>>r;

    bd3=bankdeposit(p,y,r);
    bd3.show();

}