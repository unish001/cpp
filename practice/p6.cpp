#include<iostream>
using namespace std;
class apple
{
    public:
    void showa()
    {
        cout<<"apple"<<endl;
    }

};
class ball:public apple
{
    public:
    void showb()
    {
        cout<<"ball"<<endl;
    }
};
class cat:public apple
{
    public:
    void showc()
    {
        cout<<"cat"<<endl;
    }

};
int main()
{
    cat c;
    c.showa();
    c.showc();
    ball b;
    b.showa();
    b.showb();
    return 0;
}