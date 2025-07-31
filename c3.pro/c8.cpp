    #include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    try {
        if (number < 0)
            throw "Negative number exception thrown!";
        cout << "Number is: " << number << endl;
    }
    catch (const char* msg) {
        cout << "Caught exception: " << msg << endl;
    }

    return 0;
}
