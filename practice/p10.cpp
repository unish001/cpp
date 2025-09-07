#include<iostream>   //member fuction define outside class
using namespace std;
class student
{
    public:
    int roll1;
    void roll(int r);
    void show();
};
void student:: roll(int  r)
{
    roll1=r;
}
void student:: show()
{
    cout<<roll1<<endl;
}
int main()
{
    student s;
    s.roll(1);
    s.show();
    return 0;
}