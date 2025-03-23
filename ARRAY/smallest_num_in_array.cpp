#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 12, 22, 1, -15, 24}; 
    int size = 6;
    int smallest = INT_MAX; // int max is the "positive infinite" in the c++

    for (int i = 0; i < size; i++) { 
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        // }
      smallest = min(nums[i],smallest);

    }

    cout << "Smallest number is: " << smallest << endl;
    return 0;
}
