#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream read("data.txt");
    string str;
    while(getline(read,str));
    cout<<str<<endl;
    return 0;
}