/*
#include <iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
  cout << "enter the value of n" << endl;
  cin >> n;
for (int i = 0; i <= n; i++){
  sum+=i; // sum = sum +i
}
cout << sum << endl;

  return 0 ;
}
*/

#include <iostream>
using namespace std;
int main(){
int i=1,n,sum=0;
  cout << "enter the value of n" << endl;
  cin >> n;
for (int i = 0; i <= n; i++){
  sum+=i;
  if (i ==5){
    break;
  } // sum = sum +i
}
cout << sum << endl;

  return 0 ;
}