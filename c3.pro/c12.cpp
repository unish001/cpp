#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

// Define Fuzzy Set as a map from elements to their membership value
typedef map<string, float> FuzzySet;

// Function to perform fuzzy union
FuzzySet fuzzyUnion(FuzzySet A, FuzzySet B) {
    FuzzySet result;

    // Add all elements from A
    for (auto& elem : A) {
        string key = elem.first;
        float valA = elem.second;
        float valB = B.count(key) ? B[key] : 0;
        result[key] = max(valA, valB);
    }

    // Add any elements from B that are not in A
    for (auto& elem : B) {
        string key = elem.first;
        if (A.count(key) == 0) {
            result[key] = elem.second;
        }
    }

    return result;
}

// Print a fuzzy set
void printFuzzySet(FuzzySet fs) {
    for (auto& elem : fs) {
        cout << elem.first << " : " << elem.second << endl;
    }
}

int main() {
    FuzzySet A = { {"x", 0.7}, {"y", 0.4}, {"z", 0.9} };
    FuzzySet B = { {"x", 0.5}, {"y", 0.8}, {"w", 0.6} };

    cout << "Fuzzy Set A:\n";
    printFuzzySet(A);

    cout << "\nFuzzy Set B:\n";
    printFuzzySet(B);

    FuzzySet unionSet = fuzzyUnion(A, B);

    cout << "\nFuzzy Union (A ∪ B):\n";
    printFuzzySet(unionSet);

    return 0;
}
