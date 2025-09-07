#include <iostream>
using namespace std;

class Apple {
    float x, y; // class members
public:
    // Constructor for int
    Apple(int a, int b) {
        x = a;
        y = b;
    }

    // Constructor for float
    Apple(float a, float b) {
        x = a;
        y = b;
    }

    void display() {
        cout << x + y << endl;
    }
};

int main() {
    Apple a1(1, 2);       // calls int constructor
    Apple a2(1.5, 1.5);   // calls float constructor

    a1.display(); // Output: 3
    a2.display(); // Output: 3

    return 0;
}
