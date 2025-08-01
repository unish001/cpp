#include <iostream>
using namespace std;

class unish {
    int age;
    string name;

public:
    
    unish(string name = "unish", int age = 15) {
        this->name = name;
        this->age = age;
    }

    friend istream& operator>>(istream &in, unish &u2);
    friend ostream& operator<<(ostream &out, const unish &u2);
};


istream& operator>>(istream &in, unish &u2) {
    cout << "Enter name: ";
    in >> u2.name;
    cout << "Enter age: ";
    in >> u2.age;
    return in;
}


ostream& operator<<(ostream &out, const unish &u2) {
    out << "Name: " << u2.name << endl;
    out << "Age: " << u2.age << endl;
    return out;
}

int main() {
    unish u1;
    cin >> u1;
    cout << u1;
    return 0;
}
