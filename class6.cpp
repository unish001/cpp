#include <iostream>
using namespace std;

class apple 
{
private:
    int count;

public:
    apple()
    {
        count = 5;
    }

    void display()
    {
        cout << "count: " << count << endl;
    }

   
    apple operator--() 
    {
        --count;
        return *this; 
    }
};

int main() 
{
    apple a1, a2;
    a1.display();

    a2 = --a1; 
    
    a2.display();

    return 0;
}
