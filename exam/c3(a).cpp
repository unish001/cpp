#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}
    
    // Binary + overloading (returns absolute value)
    Number operator +(Number n4) {
        return value+(n4.value);
    }
    Number operator ++(){
        return Number(++value);
    }
    
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(5);
    Number n3(3);
    cout<<"For Binary:-"<<endl;
    Number n2 = n3+n1; // Applies binary +
    cout << "After binary +: ";
    n2.display();
    cout<<"For Unary:-"<<endl;
    cout << "Original: ";
    n1.display();
    cout<<"After Unary:-"<<endl;
    Number n6=++n1;
    n6.display();
    
    
    return 0;
}