#include<iostream>
using namespace std;

int a = 15;
int* p = &a;

int main()
{
    cout << "a = " << a << endl;         
    cout << "p = " << p << endl;          
    cout << "&a = " << &a << endl;      
    cout << "&p = " << &p << endl;       
    cout << "*p = " << *p << endl;    
    return 0;
}
