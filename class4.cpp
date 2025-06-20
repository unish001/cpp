#include<iostream>
using namespace std;
class apple
{
    pub;ic:
    int a;
    apple()
    {
        a=10;
    }
    void dispaly()
    {
        cout<<"A="<<a;
    }
    void operator++()
    {
        ++a;
    }
};
int main()
{
    apple op;
    op.dispaly();
    ++op;
    op.dispaly();
    return 0;

}