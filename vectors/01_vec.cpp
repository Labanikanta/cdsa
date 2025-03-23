/*
#include <iostream>
#include <vector>
using namespace std ;
int main(){

int arr[] = { 1,2,3,4,5};
cout << arr[0] << endl; 

vector<int>lkm2 = {1,3,4};
cout << lkm2[0] << "," << lkm2[1]<< endl;

//METHOD - 1
vector<int> vec(5, 0); // Creates a vector of size 5 with all values set to 0
cout << vec[0] << endl; // Safe to access

//METHOD-2
int value = vec.empty() ? 0 : vec[0];
cout << "Value: " << value << endl;


  return 0 ;
}
*/

//METHOD-3 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; // Empty vector

    if (vec.empty()) {
        cout << "Vector is empty, default value: 0" << endl;
    } else {
        cout << "First element: " << vec[0] << endl;
    }

    return 0;
}



