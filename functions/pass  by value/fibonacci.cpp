#include <iostream>
using namespace std;
int fibonacci(int n ){
  if (n<=1){
    return n;
  }else{
    return fibonacci(n-1) + fibonacci (n-2); 
  }
}
int main (){
int x ;
cout << "enter a position of a number in fibonacci series " << endl;
cin >> x ;
cout << "the value at which the postion is entered  : " << fibonacci(x) << endl;
  return 0;
}