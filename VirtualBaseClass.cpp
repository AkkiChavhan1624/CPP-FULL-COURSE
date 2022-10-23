#include<iostream>
using namespace std;

class Student
{
   protected:
   int roll_no;
     public:
       void set_number(int a)
       {
        roll_no=a;
       }
    void print_number()
    {
        cout<< "Your Roll No Is: "<<roll_no<<endl;
    }
};

class Test: virtual public Student
{
  protected:
     float maths,physics;
    public:
      void set_marks(float m1,float m2)
      {
        maths=m1;
        physics=m2;
      }
    void print_marks()
    {
        cout<< "Your Result Is Here" <<endl
            << "Maths: "<<maths<<endl
            << "Physics:"<<physics<<endl;
    }
};
class Sports: virtual public Student
{
    protected:
       float score;
        public:
          void set_score(float sc)
          {
            score=sc;
          }
          void print_score(void)
          {
            cout<< "Your PT Score Is "<<score<<endl;
          }
};

class Result: public Test,public Sports
{
    private:
      float total;
      public:
          void display(void)
          {
              total=maths + physics + score;
              print_number();
              print_marks();
              print_score();
              cout<< "Your Total Score Is: "<<total<<endl;
              cout<< "Congratulation You Are Qualify Next Stage "<<endl;
          }
};

int main()
{
    Result akki;
    akki.set_number(24);
    akki.set_marks(75.5,84.34);
    akki.set_score(9);
    akki.display();
    
    return 0;
}