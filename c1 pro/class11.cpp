#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
        cout << "Result: " << num1 + num2;
    else if (op == '-')
        cout << "Result: " << num1 - num2;
    else if (op == '*')
        cout << "Result: " << num1 * num2;
    else if (op == '/')
        cout << "Result: " << num1 / num2;
    else
        cout << "Invalid operator!";
    
    return 0;
}
