#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int x =10;
  double a = 3.1300;
  cout << x << endl;
  cout << setw(5) << x << endl;
  cout << setfill('*') << setw(5) << x << endl;
  cout << setprecision(3)<< a << endl;
  cout << -23 % -5 << endl;
  return 0;
}