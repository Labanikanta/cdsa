#include <iostream>
#include <string>
using namespace std;

class bank{

public:
// non-parametrized contructor
bank(){
  cout << " i am a contructor " << endl;
}
// parametrized constructor 
bank (string n ,string u){
  name = n ;
  usename = u;
  }

string name;
string usename;

void getinfo(){
cout << "name :" << name << endl;
cout << "username :" << usename << endl;
}


};


int main(){
bank b1("lkm","#123lkm");  // constructor call and assign 
b1.getinfo();



  return 0;
}