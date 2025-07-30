#include <iostream>
using namespace std;

// Function template
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 3.14 and 2.72: " << findMax(3.14, 2.72) << endl;
    cout << "Max of 'a' and 'z': " << findMax('a', 'z') << endl;

    return 0;
}

