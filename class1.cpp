#include<iostream>
using namespace std;
class rec
{
    int l,b;
    public:
        void setdata(int l,int b)
        {
            l=l1;
            b=b1;
        }
        void display()
        {
            cout<<l<<b<<l*b;
        }
        rec add(rec r6,rec r7)
        {
            l=r6*l+r7*l;
        }
};

int main()
{
    rec r1,r2.r3;
    r1.setdata(12,5);
    r2.setdata(10,7);
    r1.dispaly();
    r2.dispaly();
    r3.add(r1,r2);
    r3.display();
    return 0;
}