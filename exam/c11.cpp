#include <iostream>
using namespace std;

float divide(int a, int b) {
    if (b == 0)
        throw "Division by zero is not allowed!";  // Throwing C-string
    return (float)a / b;
}

int main() {
    int x = 10, y = 0;  // You can change y to a non-zero value for normal result

    try {
        float result = divide(x, y);
        cout << "Result: " << result << endl;
    }
    catch (const char* e) {  // Catching C-string
        cout << "Exception caught: " << e << endl;
    }

    return 0;
}
