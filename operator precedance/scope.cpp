// #include <iostream>
// using namespace std;
// int y = 8;
// int main(){
//   if (3>1){
//     int x = 10;
//     cout << x << endl;
//   }
//  cout << ::y << endl; //this is scope resolution opearotor
//  // without resolution operator y is invalid 

//   return 0;
// }


// these are all are the local varibale scope 

#include <iostream>
using namespace std;
void fun(){
  int x = 10 
}
int main(){
fun();
cout << x << endl;

  return 0;
}

