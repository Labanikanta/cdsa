#include <iostream>
#include<string>
using namespace std;
int main(){
string name = "labani";
char target = 'a';
int count = 0;
for (char c : name ){
  if (c == target){
    count++;
  }
}
cout << count << endl;
  return 0;
}