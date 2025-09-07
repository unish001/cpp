#include <iostream>
using namespace std;

class Apple {
public:
    int x, y;

    // Constructor to initialize values
    Apple(int a, int b) {
        x = a;
        y = b;
    }

    // Friend function declaration
    friend int add(Apple &obj);
};

// Friend function definition
int add(Apple &obj) {
    return obj.x + obj.y;
}

int main() {
    Apple a(2, 5);       // Create object with x=2, y=5
    cout << add(a);       // Call friend function
    return 0;
}
