#include<iostream>
#include<string>  
using namespace std;

class base
{
protected: 
    string name;  
    int age;
public:
    base(string n, int a)  
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << "name = " << name << endl;  
        cout << "age = " << age << endl;
    }
};

class derived : public base
{
    string faculty;  
public:
   
    derived(string n, int a, string f) : base(n, a)  
    {
        faculty = f;
    }
    void show()
    {
        display(); 
        cout << "faculty = " << faculty << endl;  
    }
};

int main()
{
    derived d1("unish", 19, "csit"); 
    d1.show();
    return 0;
}