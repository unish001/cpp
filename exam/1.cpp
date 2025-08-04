#include<iostream>
using namespace std;
class Student{
    string name;
    int roll,marks1,marks2;
    float average;
    public:
    Student(string n,int r,int m1,int m2):name(n),roll(r),marks1(m1),marks2(m2){}
    Student(){
        cout<<"Enter the name, roll, marks1, marks2:";
        cin>>name>>roll>>marks1>>marks2;
    }
    int calc_avg()
    {
        return (marks1+marks2)/2;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl<<"Roll:"<<roll<<endl<<"Marks1:"<<marks1<<endl<<"Marks2:"<<marks2<<endl<<"Average:"<<calc_avg()<<endl;
    }
};
int main()
{
    Student s1("Ronaldo",07,99,99);
    Student s2;
    s1.display();
    s2.display();
    return 0;
}