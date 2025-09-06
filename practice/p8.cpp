#include<iostream>
using namespace std;
class parent
{
    public:
    void showa()
    {
        cout<<"parent"<<endl:
    }
};
class child1:public parent
{
    public:
    void showb()
    {
        cout<<"child1"<<endl:
    }
};
class child2:public parent
{
    public:
    void showc()
    {
        cout<<"child2"<<endl;
    }
};
int main()
{
    child1 c1;
    c1.showb();
    c1.showa();
    child2 c2;
    c2.showc();
    c2.showa();
    return 0;
}
