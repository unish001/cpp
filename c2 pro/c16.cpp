#include<iostream>
using namespace std;

template <class T , class U>
U Area(T l, U b) {
    return l*b;
}

int main() {
    cout << "Area is:"<<Area(5,6.67)<<endl;
    return 0;
}