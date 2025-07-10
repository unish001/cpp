#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};

// Single Inheritance: Student inherits from Person
class Student : public Person {
public:
    int roll;
    void setRoll(int r) {
        roll = r;
    }
    void showRoll() {
        cout << "Roll No: " << roll << endl;
    }
};

// Another base class for Multiple Inheritance
class Marks {
public:
    int math, science;
    void setMarks(int m, int s) {
        math = m;
        science = s;
    }
    void showMarks() {
        cout << "Math: " << math << ", Science: " << science << endl;
    }
};

// Multiple Inheritance: Result inherits from Student and Marks
class Result : public Student, public Marks {
public:
    void showResult() {
        int total = math + science;
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;

    r.setName("Unish");
    r.setRoll(5);
    r.setMarks(85, 90);

    r.showName();
    r.showRoll();
    r.showMarks();
    r.showResult();

    return 0;
}
