// Multiple Inheritance
#include <iostream>
using namespace std;

class Engine {
public:
    void engineType() {
        cout << "Petrol Engine" << endl;
    }
};

class Wheels {
public:
    void wheelCount() {
        cout << "4 wheels" << endl;
    }
};

class Car : public Engine, public Wheels {
};

int main() {
    Car c;
    c.engineType();
    c.wheelCount();
    return 0;
}
