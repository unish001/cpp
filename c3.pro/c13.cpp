class Box {
    int length;
public:
    Box& setLength(int length) {
        this->length = length;
        return *this;  // return current object by reference
    }

    void display() {
        cout << "Length: " << length << endl;
    }
};

int main() {
    Box b;
    b.setLength(15).display();  // Method chaining
    return 0;
}
