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

    rec add(rec r6, rec r7)
    {
        rec temp;
        temp.l = r6.l + r7.l;
        temp.b = r6.b + r7.b;
        return temp;
    }
};

int main()
{
    rec r1, r2, r3;
    r1.setdata(12, 5);
    r2.setdata(10, 7);

    r1.display();
    r2.display();

    r3 = r3.add(r1, r2);
    r3.display();

    return 0;
}
