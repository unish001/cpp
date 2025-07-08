#include<iostream>
using namespace std;

class apple
{
public:
    int a;
    apple()
    {
        a = 10;
    }
    void display()
    {
        cout << "A = " << a << endl;
    }
    void operator++()
    {
        ++a;
    }
};

int main()
{
    apple op;
    op.display();
    ++op;        // Calls overloaded prefix ++ operator
    op.display();
    return 0;
}
