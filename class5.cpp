#include <iostream>
using namespace std;

class Book {
private:
    float price;

public:
   
    Book() {
        price = 500;
    }

    
    void displayPrice() {
        cout << "Book Price: Rs. " << price << endl;
    }
};

int main() {
    Book b1;
    float p;

   
    b1.displayPrice();

    return 0;
}
