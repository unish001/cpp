#include <iostream>
using namespace std;

class person {
    string name, address;
    int id;

public:
    void setdata(string n, string a, int i) {
        name = n;
        address = a;
        id = i;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "ID: " << id << endl;
    }
};

class student : public person {
    string faculty;

public:
    void setFaculty(string f) {
        faculty = f;
    }

    void show() {
        display();  
        cout << "Faculty: " << faculty << endl;
    }
};

int main() {
    student s;
    s.setdata("Unish", "Kathmandu", 101); 
    s.setFaculty("Computer Science");      
    s.show();

    return 0;
}
