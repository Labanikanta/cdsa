#include <iostream>
using namespace std;
int main(){
  int x =20;
  int &y = x;
  int &z = x;
  x=x+10;
  cout << x << endl;
  cout << y<< endl;
  cout << z<< endl;


  return 0;
}