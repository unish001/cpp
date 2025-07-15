#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    float length, breadth;

    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    virtual void area() {
        cout << "Area of shape is undefined." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

// Derived class for Square
class Square : public Shape {
public:
    void area() override {
        if (length != breadth) {
            cout << "For square, length and breadth must be equal. Using length as side." << endl;
        }
        cout << "Area of Square = " << length * length << endl;
    }
};

int main() {
    Shape* shapePtr;
    Rectangle rect;
    Square sq;

    cout << "--- Rectangle ---" << endl;
    shapePtr = &rect;
    shapePtr->getData();
    shapePtr->area();

    cout << "\n--- Square ---" << endl;
    shapePtr = &sq;
    shapePtr->getData();
    shapePtr->area();

    return 0;
}
