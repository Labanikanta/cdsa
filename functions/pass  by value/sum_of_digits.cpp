// #include <iostream>
// using namespace std;
// int main(){
// int digitsum = 0,lastdigit,num;
// cout << "enter a number " << endl;
// cin >> num;
// while (num>0){
//   lastdigit = num % 10 ;
//   num = num /10 ;
//   digitsum += lastdigit;
// }
// cout << digitsum << endl;

//   return 0;
// }



#include <iostream>
using namespace std ;
int digitsum(int num ){
  int digitsum = 0 ;
  while (num>0){
    int lastdigit = num % 10;
    num /= 10;
    digitsum += lastdigit;
  }
  return digitsum;
}
int main(){
cout << "sum = " << digitsum(1231) << endl;
  return 0;
}