#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1(5, 0); // Creates a vector of 5 elements, all initialized to 0
    for (int i : vec1) {
        cout << i << endl;  // Prints: 0 0 0 0 0
    }

    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'}; // Vector of characters
    for (char i : vec2) {
        cout << i << endl;  // Prints: a b c d e
    }

    return 0;
}
