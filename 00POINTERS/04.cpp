#include <iostream>
#include <vector>
using namespace std;
int main(){
// we use null pointer to avoid the garbege value in the memory address
//exmaple
int *x;
cout << x << endl;

// to avoid it we use NULL pointer

//NULL pointer
int* ptr3 = NULL;
cout << &ptr3 << endl;
cout << *(&ptr3) << endl;
cout << ptr3 <<endl;

// cout << *ptr3 << endl; // invalid 


return 0;
}
