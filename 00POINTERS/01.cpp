#include <iostream>
#include<vector>
using namespace  std;
int main(){
int a = 10;
int* ptr = &a;

cout << &a << endl; // address of a 
cout << ptr << endl;// address of a 

cout << &ptr << endl;// address of the ptr pointer

cout << *(&a) << endl;//value of the a 
cout << *ptr << endl;// value of the a 
  return 0;
}