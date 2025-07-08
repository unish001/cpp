#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    int number, original, remainder, result = 0, count = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    
    int temp = number;
    while (temp != 0) 
    {
        temp /= 10;
        count++;
    }

   
    temp = number;
    while (temp != 0) 
    {
        remainder = temp % 10;
        result += pow(remainder, count);
        temp /= 10;
    }

   
    if (result == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
