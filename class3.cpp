#include<iostream>
using namespace std;

class complex
{
    float real,imaginary;
    public:
        void setdata(int a, int b)
        {
            real=r;
            imaginary=i;
        }
        complex add(complex c4)
        (
            complex c3;
            c3.real=real+c4.real;
            c3.imaginary=imaginary+c4.imaginary;
            return c3;
        )
        void dispaly()
        {
            cout<<"The sum is"<<real<<" + "<<imaginary<<"i"<<endl;
        }
}c1,c2;

int main()
{
    c1.setdata(3,1)
    c2.setdata(1.2,3.4)
    complex c5=c1.add(c2)
    c5.dispaly();
    return 0;
}