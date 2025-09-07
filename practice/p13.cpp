#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream write("data.txt");
    write<<"apple";
    write.close();
    return 0;
}