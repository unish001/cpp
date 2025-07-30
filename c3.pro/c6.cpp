#include <iostream>
using namespace std;

// Function template
template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    try {
        cout << "Integer division: 10 / 2 = " << divide<int>(10, 2) << endl;
        cout << "Floating point division: 10.5 / 2.5 = " << divide<float>(10.5, 2.5) << endl;
        
        // This will throw an exception
        cout << "Trying division by zero: " << divide<int>(10, 0) << endl;
    }
    catch (runtime_error &e) {
        cerr << "Caught an exception: " << e.what() << endl;
    }

    cout << "Program continues after exception." << endl;

    return 0;
}
