#include <iostream>
using namespace std;
int factrorialN(int n){
  int fact =1;
  for (int i = 1;i<=n;i++){
    fact *= i;
  }
  return fact;
}

int main(){
cout << factrorialN(5) << endl;
cout << factrorialN(4) << endl;
  return 0;
}