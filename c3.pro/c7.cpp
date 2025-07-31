#include <iostream>
#include <string>
using namespace std;

// Custom exception class
class MyException {
    string message;
public:
    MyException(string msg) : message(msg) {}
    string what() const { return message; }
};

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0) {
            throw MyException("Negative number entered. Exception thrown with argument!");
        }
        cout << "You entered: " << number << endl;
    }
    catch (MyException e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
