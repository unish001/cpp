#include <iostream>
using namespace std;

class nrs
{
    int rs, ps;

public:
    nrs(int r, int p)
    {
        rs = r;
        ps = p;
    }

    operator float()
    {
        float w = rs + ps / 100.0; 
        return w;
    }
};

int main()
{
    nrs np(100, 200);

    float q = (float)np; 

    cout << "The converted amount is " << q << endl;

    return 0;
}
