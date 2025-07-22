#include<iostream>
using namespace std;

template <class T , class U>
U findMax(T a, U b) {
    if(a>b)
    return a;
    else
    return b;
}

int main() {
    cout << "Greatets is:"<< findMax(75,'A');
}