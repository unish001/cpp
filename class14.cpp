#include <iostream>
using namespace std;

class Price {
    int amount;

public:
    void display() {
        cout << "Book price: " << amount << endl;
    }

    void setdata() {
        cout << "Enter price: ";
        cin >> amount;
    }

    bool operator > (Price p) {
        return amount > p.amount;
    }
};

int main() {
    Price p1, p2;

    p1.setdata();
    p2.setdata();

    if (p1 > p2)
        cout << "p1 is greater";
    else
        cout << "p2 is greater";

    return 0;
}
