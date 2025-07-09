//Hybrid Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D d;
    // Ambiguity! Must specify path
    d.B::showA();  // or d.C::showA();
    d.showB();
    d.showC();
    d.showD();
    return 0;
}
