//Hierarchical Inheritance
#include <iostream>
using namespace std;

class Parent {
public:
    void speak() {
        cout << "Hello from parent" << endl;
    }
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.speak();
    c2.speak();
    return 0;
}
