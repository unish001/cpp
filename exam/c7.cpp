#include <iostream>
using namespace std;

template <typename T1, typename T2>
void combine(T1 a, T2 b) {
    
    cout<< a << " + " << b << " = Combined!";
  
}

int main() {
    combine(10, 3.14);           // int + float
    combine('A', string("pple")); // char + string


    return 0;
}
