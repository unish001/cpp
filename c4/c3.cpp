#include <iostream>
#include <fstream>   // for file handling
#include <string>
using namespace std;

int main() {
    // Step 1: Create and write to a file
    ofstream outFile("example.txt");  // output file stream

    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Hello, this is a file handling example in C++.\n";
    outFile << "We are writing some text into the file.\n";
    outFile << "File handling makes reading and writing easier." << endl;

    outFile.close();  // always close the file after writing
    cout << "Data written to file successfully." << endl;

    // Step 2: Read from the file
    ifstream inFile("example.txt");  // input file stream

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "\nReading data from file:\n";
    while (getline(inFile, line)) {   // read line by line
        cout << line << endl;
    }

    inFile.close();  // close after reading

    return 0;
}
