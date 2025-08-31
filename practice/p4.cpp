#include<iostream>
using namespace std;
class a
{
    public:
    virtual void show()=0;
    void display()
    {
        cout<<"base class";

    }
};
class b:public a
{
    public:
    void show(
        {
            cout<<"derived class";
        }
    )
};
void main()
{
    clsrc();
    b ob;
    ob.display;
    getch();
}