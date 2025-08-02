#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of terms
    string term = "";

    for (int i = 1; i <= n; i++) {
        term += to_string(i);  // Append the next digit
        cout << term;
        if (i != n) {
            cout << ", ";  // Add comma and space except after the last term
        }
    }

    cout << endl;
    return 0;
}
