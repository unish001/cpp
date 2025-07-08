#include<iostream>
using namespace std;

class base
{
public:
    int a;

protected:
    int c;

private:
    int b;

public:
    base()  // constructor
    {
        a = 10;
        b = 30;
        c = 40;
    }
};

class derived1 : public base
{
public:
    void display()
    {
        cout << "A = " << a << endl;  
       // cout << "B = " << b << endl; 
        cout << "C = " << c << endl;  
    }
};

int main()
{
    derived1 d;
    d.display();

    return 0;
}
