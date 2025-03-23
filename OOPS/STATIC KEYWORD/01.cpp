#include <iostream>
#include<string>
using namespace std;
void func(){
  
  static int x = 0; // initilization 1 times only
  cout << "x :" <<  x << endl;
  x++;
}

int main(){
func();
func();
func();
func();
  return 0;
}