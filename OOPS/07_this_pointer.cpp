#include <iostream>
#include <string>
using namespace std;

class bank{

public:
string name;
string usename;


// non-parametrized contructor
bank(){
  cout << " i am a contructor " << endl;
}
// parametrized constructor 
bank (string name ,string username){
  this->name = name ;  
  this->usename = username;
  }



void getinfo(){
cout << "name :" << name << endl;
cout << "username :" << usename << endl;
}


};


int main(){
bank b1("lkm","#123lkm"); // constructor call and assign
//b1.getinfo();

bank b2(b1); // default copy constructor 
b2.getinfo();
  return 0;
}