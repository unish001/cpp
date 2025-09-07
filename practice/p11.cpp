#include<iostream>   //Objects as Function Arguments
using namespace std;
class number
{
    public:
    int x;
    number(int a)
    {
        x=a;
    }
    void show()
    {
        cout<<x<<endl;
    }
};
void display(number n1)
{
    n1.show();
}
int main()
{
    number n(2);
    display(n);
    return 0;
}