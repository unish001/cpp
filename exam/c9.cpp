#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int id;
    string role;

public:
    Employee(string n, int i, string r) {
        name = n;
        id = i;
        role = r;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name      : " << name << endl;
        cout << "Role      : " << role << endl;
    }
};

class Company {
    string companyName;
    Employee* emp;  // Aggregation: Company has-an Employee (pointer)

public:
    Company(string cname, Employee* e) {
        companyName = cname;
        emp = e;
    }

    void showDetails() {
        cout << "Company Name: " << companyName << endl;
        cout << "--- Employee Info ---" << endl;
        emp->display();  // Access Employee's display method
    }
};

int main() {
    // Create an Employee object
    Employee e1("Unish Shilpakar", 101, "Software Developer");

    // Create a Company object and pass employee object
    Company c1("TechNepal Pvt. Ltd.", &e1);

    // Display company and employee info
    c1.showDetails();

    return 0;
}
