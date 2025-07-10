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

// Multilevel Inheritance: Student inherits Person
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

// Multilevel continues: Exam inherits Student
class Exam : public Student {
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

// Another base class for Hybrid Inheritance
class Sports {
public:
    int score;
    void setScore(int s) {
        score = s;
    }
    void showScore() {
        cout << "Sports Score: " << score << endl;
    }
};

// Hybrid Inheritance: Result inherits from Exam and Sports
class Result : public Exam, public Sports {
public:
    void showResult() {
        int total = math + science + score;
        cout << "Total (Marks + Sports): " << total << endl;
    }
};

int main() {
    Result r;

    r.setName("Unish");
    r.setRoll(15);
    r.setMarks(88, 92);
    r.setScore(20);

    r.showName();
    r.showRoll();
    r.showMarks();
    r.showScore();
    r.showResult();

    return 0;
}
