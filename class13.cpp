#include <iostream>
using namespace std;

class Time 
{
    int hour, minutes;

public:
    void display() 
    {
        cout << "Hour: " << hour << ", Minutes: " << minutes << endl;
    }

    void setdata() 
    {
        cout << "Enter hour and minutes: ";
        cin >> hour >> minutes;
    }

    bool operator > (Time tm) 
    {
        int total1 = hour * 60 + minutes;
        int total2 = tm.hour * 60 + tm.minutes;
        return total1 > total2;
    }
};

int main() 
{
    Time t1, t2;

    t1.setdata();
    t2.setdata();

    if (t1 > t2)
        cout << "Time t1 is greater.\n";
    else
        cout << "Time t2 is greater.\n";

    return 0;
}
