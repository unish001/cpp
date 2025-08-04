#include <iostream>
#include <sstream>  // For stringstream
using namespace std;

// 🔷 Template with two different types: T1 and T2
template <typename T1, typename T2>
void combine(T1 a, T2 b) {
    stringstream ss;
    ss << a << " + " << b << " = Combined!";
    cout << ss.str() << endl;
}

int main() {
    combine(10, 3.14);           // int + float
    combine('A', string("pple")); // char + string
    combine(string("Age: "), 25); // string + int

    return 0;
}
