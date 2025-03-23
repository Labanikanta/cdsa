#include <iostream>
using namespace std;

void printnums(int n){  // recursive function
if (n==1){
  cout << "1" << endl; 
  return;
}
  cout << n << " ";
  printnums(n-1);
  
}
int main(){
  printnums(4);
  return 0 ;
}