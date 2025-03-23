#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a = 5;
  int* p = &a;
  int** q = &p;

  cout << *p << endl;
  cout << **q << endl;


  cout << p << endl; //same 
  cout <<&a << endl; // same 

  cout <<*q << endl; // same 



return 0;
}