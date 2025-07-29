#include <iostream>
#include <iomanip> // for formatting functions
using namespace std;

int main() {
    cout << "Example for formatted output using member functions" << endl;

    cout << "Default output:" << endl;
    cout << 123 << endl;

    cout << "\nWidth(15):" << endl;
    cout.width(15);
    cout << 123 << endl;

    cout << "\nWidth(15) and fill('*'):" << endl;
    cout.width(15);
    cout.fill('*');
    cout << 123 << endl;

    cout << "\nSet precision(3):" << endl;
    cout.precision(3);
    cout << 123.4567890 << endl;
    cout << 180.3733828 << endl;

    cout << "\nsetf(showpos):" << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

    cout << "\nunsetf(showpos):" << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;

    return 0;
}
