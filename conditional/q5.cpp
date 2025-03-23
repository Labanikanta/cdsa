#include <iostream>
using namespace std;
int main(){
char ch;
cout << "enter a char " << endl;
cin >> ch;
if (ch >= 'a' && ch <='z' ){
  cout << " the charcater is in lowercase " << endl;
}else{
  cout << " the charcater is in capitalcase " << endl;
}

  return 0;
}
