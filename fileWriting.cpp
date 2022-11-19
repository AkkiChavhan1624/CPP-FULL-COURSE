#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st="hey akash";

    ofstream out("sample60.txt");
     
    out<<st;

    return 0;
}