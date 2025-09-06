#include<iostream>
using namespace std;
class grandparent
{
    public:
    void showa()
    {
        cout<<"grand"<<endl;

    }
};
class parent:public grandparent
{
    public:
    void showb()
    {
        cout<<"parent"<<endl;
    }
};
class child:public parent
{
    public:
    void showc()
    {
        cout<<"child"<<endl;
    }
};
int main()
{
    child c;
    c.showc();
    c.showb();
    parent p;
    p.showb();
    p.showa();
    return 0;
}