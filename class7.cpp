#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    string name;

public:
  student()
  {
       name="aawart";
       roll=69;
   }
   student(int r,string n)
   {
       roll=r;
       name=n;
   }
   
    student operator++()
    {
        ++roll;
        return student(roll,"unish");
    }
    void display()
    {
        cout<<"name:"<<name<<endl<<"roll:"<<roll<<endl;
    }
};

int main()
{
    student b1, b2;
    b1.display();   
    b2 = ++b1;
    b2.display();  

    return 0;
}
