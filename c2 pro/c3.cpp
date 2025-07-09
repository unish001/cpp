// Single Inheritance
#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
};

int main() {
    Dog d;
    d.sound();
    return 0;
}
