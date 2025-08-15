#include <iostream>
using namespace std;


int* findMax(int* a, int* b) {
    if (*a > *b)
        return a;  
    else
        return b; 
}

int main() {
    int x = 10, y = 20;

  
    int* result = findMax(&x, &y);

    cout << "Greater value is: " << *result << endl;  
    return 0;
}
