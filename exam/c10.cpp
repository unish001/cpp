#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

// Derived class: Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class: Square
class Square : public Shape {
    float length;
public:
    Square(float l) {
        length = l;
    }

    void area() override {
        cout << "Area of Square = " << length * length << endl;
    }
};

int main() {
    Rectangle r(10, 5);
    Square s(6);

    r.area();  // Output: 50
    s.area();  // Output: 36

    return 0;
}
