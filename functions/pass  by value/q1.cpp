// #include <iostream>
// using namespace std;
// int sum (int a,int b){
//   return (a+b);
// }
// int main(){
//   int x=8,y=9;
//   cout << sum(x,y) << endl;

//   return 0;
// }



#include <iostream>
using namespace std;
int sum (int a,int b){
  a = a+10;   // 18
  b = b+10;   //19
  return (a+b); // 37
}
int main(){
  int a=8,b=9;
  cout << sum(a,b) << endl;
  cout << a << endl;
  cout << b<< endl;
  

  return 0;
}