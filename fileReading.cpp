#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st;
    ifstream in("sample60b.txt");
   
    in >> st;
    getline(in, st);
    cout<<st;
    return 0;
}