#include <iostream>
#include<string>
using namespace std;
class Print{
public:

void show(int x){
  cout << "int : " << x << endl;
}

void show(char ch){
  cout << "char : " << ch << endl;
}

void show(string st){
  cout << "string : " << st << endl;
}

};
int main(){
Print p1;
p1.show(101);
p1.show('A');
p1.show("Labanikanta Majhi");
  return 0;
}