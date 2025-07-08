#include<iostream>
using namespace std;

class rec
{
    int l, b;
public:
    void setdata(int l, int b)
    {
        this->l = l;
        this->b = b;
    }

    void display()
    {
        cout << "Length: " << l << ", Breadth: " << b << ", Area: " << l * b << endl;
    }

    rec add(rec r6)
    {
        rec r7;
        r7.l = this->l + r6.l;
        r7.b = this->b + r6.b;
        return r7;
    }
};

int main()
{
    rec r1, r2, r3;
    r1.setdata(12, 5);
    r2.setdata(10, 7);

    r1.display();
    r2.display();

    r3 = r1.add(r2);
    r3.display();

    return 0;
}
