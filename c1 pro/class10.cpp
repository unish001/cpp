#include<iostream>
using namespace std;
class dhewa
{
    public:
    int rupee,paisa;
    dhewa()
    {
        rupee= 50;
        paisa= 10;
    }
    dhewa(int r, int p)
    {
        rupee= r;
        paisa= p;
    }
    void display()
    {
    cout<<"Dhewa="<<rupee<<"."<<paisa<<endl;
    }
    dhewa operator -=(dhewa d10)
    {
        // dhewa d5;
        // d5.rupee=rupee-d10.rupee;
        // d5.paisa=paisa=d10.paisa;

        rupee-=d10.rupee;
        paisa-=d10.paisa;
    }
};
int main()
{
    dhewa d1, d2(30,7),d3(60,9);
    d1.display();
    d2.display();
    d3.display();
    d3-=d2;
    d3.display();

}