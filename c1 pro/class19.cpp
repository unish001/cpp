//10 marks fixed

//destination ma kam gareko

#include<iostream>
using namespace std;

class MKS
{
    int km, m;
    public:
    MKS()
    {
        km=0;
        m=0;
    }

    MKS(int k , int mtr)
    {
        km=k;
        m=mtr;
    }

    void display()
    {
        cout<<"KM= "<<km<<"METER= "<<m<<endl;
    }

    int getkm()
    {
        return km;
    }

    int getm()
    {
        return m;
    }
};
class FPS
{
    int feet, inch;
    public:
    FPS()
    {
        feet=0;
        inch=0;
    }
    FPS(int f , int i)
    {
        feet=f;
        inch=i;
    }
    void display()
    {
       cout<<"Feet= "<<feet<<"Inch= "<<inch<<endl;
    }    
    FPS(MKS m3)
    {
       feet = m3.getkm() * 3280;   //MKS ko km use gareko le muni MKS ma function banako anii access garna pako
       inch = m3.getm()*40;
       feet = feet+inch/12;
       inch = inch%12;
    }
};



    // operator FPS()
    // {
    //     int fe = km * 3280;      //1km=3280feet 
    //     int in = m * 40;        //1m =40inch
    //      fe = fe + (in/12);
    //      in = in % 12;
    //     return FPS(fe, in) ;            
    // }


//conversion from mps to fps
int main()
{
    MKS m1(2,37);
    FPS f1;
    f1 = m1;
    m1.display();
    f1.display();
    return 0;
}