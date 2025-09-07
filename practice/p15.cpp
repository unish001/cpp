#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);
    if (!file) return 1;
    file << "Hello World\n";
    file.close();
    cout << "Text appended successfully!" << endl;
    return 0;
}
