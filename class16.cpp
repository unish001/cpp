#include <iostream>
using namespace std;

int number;

int main()
{
    cout << "Enter the number: " << endl;  // fixed: `<<` instead of `<`
    cin >> number;

    if (number > 0) 
    {
        cout << number << " is positive." << endl;  // fixed: `<<` instead of `<>`
    }
    else if (number == 0)
    {
        cout << "The number is zero." << endl;
    }
    else
    {
        cout << number << " is negative." << endl;
    }

    return 0;
}
