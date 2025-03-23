#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec1 = {10, 20, 30}; // Declare vec1 properly
    cout << "Initial vec1 size = " << vec1.size() << endl;

    cout << "Popping the last element from vec1" << endl;
    vec1.pop_back(); // Removing last element
    cout << "After popping, vec1 size = " << vec1.size() << endl;

    vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'}; // Vector of characters
    cout << "Initial vec2 elements:" << endl;
    for (char i : vec2) {
        cout << i << " ";  
    }
    cout << endl;

    cout << "Popping the last element from vec2" << endl;
    vec2.pop_back(); // Removing last element from vec2
    cout << "After popping, vec2 size = " << vec2.size() << endl;

    cout << "Updated vec2 elements:" << endl;
    for (char i : vec2) {
        cout << i << " ";  
    }
    cout << endl;
    return 0;
}
