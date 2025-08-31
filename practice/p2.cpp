#include <iostream>
#include<fstream>
using namespace std;
int main()
{
  
   ofstream onFile;
   onFile.open("C:\Users\\Dell\\Desktop\\file.txt>"); //create
   inFile>>str;
   cout<<str;
   onFile<<"thank you";  //write
   cout<<"file created";
   onFile.close();
}