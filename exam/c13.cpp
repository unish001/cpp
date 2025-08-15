#include <iostream>
using namespace std;

inline void printChars(char ch = '*', int n = 5) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() 
{
    printChars('#', 10);  
    printChars('@');           
    printChars();         
    return 0;
}
