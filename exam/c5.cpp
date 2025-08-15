#include<iostream>
using namespace std;
class NPR
{
    int rs, ps;
    public:
    NPR()
    {
        rs=0;
        ps=0;
    }
    NPR(int r, int p)
    {
        rs=r;
        ps=p;
    }
        void display()
    {
        cout<<"Rupees= "<<rs<<"Paisa= "<<ps<<endl;
    }
   int getrs()
   {
    return rs;
   }
   int getps()
   {
    return ps;
   }

};

class USD
{
    int dol, cent;
    public:
    USD()
    {
        dol=0;
        cent=0;
    }
    USD(int d, int c)
    {
        dol=d;
        cent=c;
    }
    void display()
    {
        cout <<"dollar:"<<dol;
        cout<<"cent:"<<cent;
    }
    USD(NPR n3){
        dol=n3.getrs()/145;
        cent=n3.getps()/25;
        dol=dol+cent/100;
        cent=dol%100;
    }
};

int main()
{
    NPR n1(1000,150);
    USD d1;
    d1=n1;
    n1.display();
    d1.display();
    return 0;
}