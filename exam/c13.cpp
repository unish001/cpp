#include <iostream>
using namespace std;

// Inline function with default arguments
inline void printChars(char ch = '*', int n = 5) {
    for (int i = 0; i < n; i++) {
        cout << ch;
    }
    cout << endl;
}

int main() {
    // Call with both arguments
    printChars('#', 10);   // ##########

    // Call with one argument (char only)
    printChars('@');       // @@@@@

    // Call with no argument (use both defaults)
    printChars();          // *****

    return 0;
}
