#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt"); // Open file for reading
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close(); // Fixed typo here
    }
    else 
    {
        cout << "Unable to open file";
    }
    return 0;
}
