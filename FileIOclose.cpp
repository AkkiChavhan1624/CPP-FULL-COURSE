#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream out;
    // out.open("sample60.txt");
    // out<<"this is me\n";
    // out<<"This is akki";

    // out.close();

    ifstream in;
    string st;
    in.open("sample60.txt");
    while(in.eof()==0)
    {
      getline(in,st);
      cout<<st<<endl;
    }
      cout<<st<<endl;
  
    return 0;
}