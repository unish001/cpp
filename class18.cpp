//10 marks fixed

//source ma kam gareko

#include<iostream>
using namespace std;
//class FPS;  //forward declaration tara vs ma chaldaina so
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
};
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
    operator FPS()
    {
        int fe = km * 3280;      //1km=3280feet 
        int in = m * 40;        //1m =40inch
         fe = fe + (in/12);
         in = in % 12;
        return FPS(fe, in) ;            
    }
};

//conversion from mps to fps
int main()
{
    MKS m1(2,37);
    FPS f1;
    f1 = m1;
    m1.display();
    f1.display();
}