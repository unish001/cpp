#include<iostream>
using namespace std;

class animal {
public:
    virtual void display() {
        cout << "\nFrom base class animal";
    }
};

class cow : public animal {
public:
    void display() override {
        cout << "\nFrom derived class cow";
    }
};

class dog : public animal {
public:
    void display() override {
        cout << "\nFrom derived class dog";
    }
};

int main() {
    animal* pa; // pointer to base class

    animal a;
    cow c;      // corrected: was written as COW C
    dog d;

    pa = &a;
    pa->display(); // calls animal::display()

    pa = &c;
    pa->display(); // calls cow::display() due to virtual function

    pa = &d;
    pa->display(); // calls dog::display() due to virtual function

    return 0;
}
