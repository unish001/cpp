#include <iostream>
#include <string>
using namespace std;

float divide(int a, int b) {
    if (b == 0)
        throw string("Division by zero is not allowed!");
    return (float)a / b;
}

int main() {
    int x = 10, y = 0;  // You can change y to a non-zero value for normal result

    try {
        float result = divide(x, y);
        cout << "Result: " << result << endl;
    }
    catch (string e) {
        cout << "Exception caught: " << e << endl;
    }

    return 0;
}
