#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "First element: " << vec.back() << endl; // Output: 10

    vec.back() = 100; // Modify first element
    cout << "After modification: " << vec.back() << endl; // Output: 100

    for (int i : vec){
      cout << i <<" ";
    }
    cout << endl;

    cout << "value at index point is :  " << vec.at(3) << endl; 
    return 0;


}
