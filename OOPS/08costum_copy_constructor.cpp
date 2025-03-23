#include <iostream>
#include <string>
using namespace std;

class bank{

public:
string name;
string usename;

// parametrized constructor 
bank (string name ,string username){
  this->name = name ;  
  this->usename = username;
  }

  // copy constructor
  bank (bank &orgobj)  { // pass by refernce 
  cout << "i am a copy contructor! " << endl;
  this->name = orgobj.name;
  this->usename = orgobj.usename;
  }


void getinfo(){
cout << "name :" << name << endl;
cout << "username :" << usename << endl;
}


};


int main(){
bank b1("lkm","#123lkm"); // constructor call and assign
//b1.getinfo();

bank b2(b1); // costum copy constructor 
b2.getinfo();
  return 0;
}