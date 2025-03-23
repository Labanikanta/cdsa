#include <iostream>
using namespace std;
int printhello(){
  cout << "hello" << endl;
  return 3;
}
int main(){

int val = printhello();                //---> this is same  (..)
cout << "value = " << val << endl;

// insted of the above 2 line we can write that 
cout << printhello () << endl;         // ---> this is also same(..)
  return 0;
}