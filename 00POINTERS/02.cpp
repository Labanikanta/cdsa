#include <iostream>
#include<vector>
using namespace std;
int main(){
float a = 19.31;
float* ptr1 = &a;;
cout << ptr1 << endl;
cout << &ptr1 <<endl;

cout << *ptr1 << endl;
cout << *(&ptr1) << endl;
cout << **(&ptr1) << endl;


return 0;
}