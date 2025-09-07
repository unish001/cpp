#include <iostream>
using namespace std;
void add(int &a)
 {
    a = a + 5;
}

int main() 
{
    int a = 2; 
    add(a);     
    cout << a;  

    return 0;
}
