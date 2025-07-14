#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseName;
    int courseCode;

public:
    Course() {
        courseName = "";
        courseCode = 0;
    }

    void setData(string name, int code) {
        courseName = name;
        courseCode = code;
    }

    void displayCourse() const {
        cout << "Course Name: " << courseName << ", Course Code: " << courseCode << endl;
    }
};

class Student {
private:
    string name;
    int rollNo;
    Course* course;  // Aggregation: Student "has a" Course (but does not own it)

public:
    Student() {
        name = "";
        rollNo = 0;
        course = nullptr;
    }

    void setData(string n, int r, Course* c) {
        name = n;
        rollNo = r;
        course = c;
    }

    void displayStudent() const {
        cout << "Student Name: " << name << ", Roll No: " << rollNo << endl;
        if (course != nullptr) {
            course->displayCourse();
        } else {
            cout << "No course assigned." << endl;
        }
    }
};

int main() {
    Course c1;
    c1.setData("Object Oriented Programming", 205);

    Student s1;
    s1.setData("Unish", 101, &c1);

    s1.displayStudent();

    return 0;
}
