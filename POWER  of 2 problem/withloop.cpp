#include <iostream>
using namespace std;
bool ispoweroftwo(int n ){
  if (n<=0) return false;
  while (n%2==0){
    n/=2;
  }
  return n == 1;
}
int main(){
int num ;
cout << "enter a number" << endl;
cin >> num;
if (ispoweroftwo(num)){
  cout << num << " is power of 2 " << endl ;
}
else {
  cout << num << " is not  power of 2 " << endl;
}
}