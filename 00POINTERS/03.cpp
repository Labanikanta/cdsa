#include <iostream>
#include<vector>
using namespace std;
int main(){
int x = 12;
int* ptr1 = &x;
int** ptr2 = &ptr1;

cout << ptr2 << endl;
cout << &ptr1 << endl;

cout << ptr1 << endl;
cout << &x << endl;

return 0;
}