#include<iostream>
using namespace std;

template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << findMax(5, 10) << endl;          
    cout << findMax(235.9645348,235.9645347) << endl;     
    cout << findMax(char('h'), char('w')) << endl; 
    return 0;
}