#include <iostream>
#include <fstream> // Correct header for ofstream
using namespace std;

int main()
{
    ofstream file("test.txt"); // Create or overwrite file
    file << "hello world" << endl;
    file.close(); // Close the file
    return 0;
}
