#include <iostream>
using namespace std;

// 🔷 Function that takes and returns pointer
int* findMax(int* a, int* b) {
    if (*a > *b)
        return a;  // return pointer to a
    else
        return b;  // return pointer to b
}

int main() {
    int x = 10, y = 20;

    // Passing addresses (pointers)
    int* result = findMax(&x, &y);

    cout << "Greater value is: " << *result << endl;  // Output: 20
    return 0;
}
