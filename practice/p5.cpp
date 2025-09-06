#include<iostream>
using namespace std;
class parent
{
    public:
    void showa()
    {
        cout<<"unish";
    }
    
};
class child:public parent
{
    public:
    void showb()
    {
    cout<<"apple";
    }
};
int main()
{
    child c;
    c.showa();
    c.showb();
}
    