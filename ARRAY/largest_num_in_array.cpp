#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 12, 22, 1, -15, 24}; 
    int size = 6;
    int largest = INT_MIN; // int min is the "negative infinite" in the c++

    for (int i = 0; i < size; i++) { 
        // if (nums[i] < largest) {
        //     largest = nums[i];
        // }
      largest = max(nums[i],largest);

    }

    cout << "largest number is: " << largest << endl;
    return 0;
}
