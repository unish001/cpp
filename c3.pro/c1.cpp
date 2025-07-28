#include <iostream>

#include <stdexcept> // for runtime_error

using namespace std;



int main() {

    int a = 0, b = 0;



    cout << "Enter two numbers (a and b): ";

    cin >> a >> b;



    try {

        if (a < 0 || b < 0) {

            throw runtime_error("Negative numbers are not allowed.");

        } else {

            cout << "The sum is: " << a + b << endl;

        }

    }

    catch (const runtime_error& e) {
lado khau
        cout << "Error: " << e.what() << endl;

    }



    return 0;

}