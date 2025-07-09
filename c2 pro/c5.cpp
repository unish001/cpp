//Multilevel Inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "I am studying" << endl;
    }
};

class Graduate : public Student {
public:
    void degree() {
        cout << "I have a degree" << endl;
    }
};

int main() {
    Graduate g;
    g.info();
    g.study();
    g.degree();
    return 0;
}
