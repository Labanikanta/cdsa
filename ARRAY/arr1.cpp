// #include <iostream>
// using namespace std;

// int main() {
//     int  nums[6] = {99, 100, 101, 102, 103, 104}; 
//      nums[0] = 79;
//     cout << nums[0] << endl; 
//     cout << nums[1] << endl; 
//     cout << nums[2] << endl; 
//     cout << nums[3] << endl; 
//     cout << nums[4] << endl; 
//     cout << nums[5] << endl;
//     cout << nums[6] << endl;  
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int  nums[5] = {99, 100, 101, 102, 103}; 
    int szn = sizeof(nums);
    int szi = sizeof(int);
    cout << szn << endl;
    cout << szi << endl;
    cout << "az size is:"<< (szn/szi) << endl;
    for (int i = 0 ; i<(szn/szi);i++){
      cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
// here i is the index value 