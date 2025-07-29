#include <iostream>
using namespace std;

int main() {
   char c,d[10];
   cout<<"Enter a char:";
   cin.get(c);
   cin.ignore();
   cout<<"Enter a 10 char:";
   cin.getline(d,10);
   cout<<c<<endl;
   cout<<d<<endl;
   return 0;
}