#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void show()=0;
};
class rec:public shape
{
    public:
    void show()
    {
    cout<<"rectangle";
    }
};
int main()
{
    rect r;
    r.show();
    return 0;
}