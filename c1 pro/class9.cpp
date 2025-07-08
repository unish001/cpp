#include <iostream>
using namespace std;

class samaya
{
    int hour, minute;

public:
    
    samaya() 
    {
        hour = 0;
        minute = 0;
    }


    samaya(int h, int m) 
    {
        hour = h;
        minute = m;
    }

    
    void display()
    {
        cout << "Time = " << hour << " hour(s) " << minute << " minute(s)" << endl;
    }

    
    samaya operator+(samaya s)
    {
        samaya temp;
        temp.minute = minute + s.minute;
        temp.hour = hour + s.hour + temp.minute / 60;
        temp.minute = temp.minute % 60;
        return temp;
    }
};

int main() 
{
    samaya s1(2, 40), s2(3, 50), s3;
    s1.display();
    s2.display();

    s3 = s1 + s2;
    s3.display();

    return 0;
}
