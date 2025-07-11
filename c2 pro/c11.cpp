#include<iostream>
using namespace std;
class shape {
    protected:
    int l,b,h;
    public:
    void setdata() {
        cout << "Enter length, breadth and height: ";
        cin >> l >> b >> h;
    }

        //implementation thaha vayena vana or future ma implement garinxa vana use ->virtual function
        // eg area nikalda kun shape ko nikalna suru ma thaha hudaina

        virtual void calcarea() =0; // pure virtual function

};
class rectangle: public shape {
    public:
    void calcarea() 
    {
        cout << "Area of rectangle: " << l * b << endl;
    }
};
class triangle: public shape {
    public:
    void calcarea() 
    {
        cout << "Area of triangle: " << 0.5 * b * h << endl;
    }
};
int main()
{
    rectangle r1;
    r1.setdata();
    r1.calcarea();

    triangle t1;
    t1.setdata();
    t1.calcarea();

}