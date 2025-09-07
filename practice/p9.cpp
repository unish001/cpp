#include<iostream>
using namespace std;
class apple
{
    public:
    int b;
    apple(int a)
    {
        b=a;
    }
    void show()
    {
        cout<<b<<endl;
    }
    
};
int main()
{
    apple n1(5);
    n1.show();
    apple n2=n1;
    n2.show();
    return 0;
}
