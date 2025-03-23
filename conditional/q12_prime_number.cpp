/*

#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "enter a number " << endl;
  cin >> n;
  bool isprime = true;
  for (int i = 2 ; i<=n-1 ; i++){
    if (n%i==0){
     isprime = false;
     break;
    }
  }
  if (isprime == true){
    cout << "prime number" << endl;
  }else {
    cout << "non prime numeber" << endl;
  }
  
  return 0;
}
*/


// method -2

#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "enter a number " << endl;
  cin >> n;
  bool isprime = true;
  for (int i = 2 ; i*i<= n; i++){
    if (n%i==0){
     isprime = false;
     break;
    }
  }
  if (isprime == true){
    cout << "prime number" << endl;
  }else {
    cout << "non prime numeber" << endl;
  }
  
  return 0;
}
