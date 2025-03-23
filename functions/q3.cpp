#include <iostream>
using namespace std;
// sum of 2 number 
int sum (int a ,int b){  // these are called PARAMETERS
   int s = a+b;
   return s ;
}

// minimum of 2 number 
int minioftwo(int a ,int b){
if (a<b){
  return a ;
}else {
  return b;
}
}

int main(){

cout << "sum = " << sum(10,5) << endl;   // these are called ARGUMENTS 
cout << "minimum  = " << minioftwo(2,3) << endl;

  return 0;
}