bool success = false;
while (!success) {
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    try {
        if (a < 0 || b < 0) {
            throw runtime_error("Negative numbers are not allowed.");
        }
        cout << "The sum is: " << a + b << endl;
        success = true;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << " Try again.\n";
    }
}
 