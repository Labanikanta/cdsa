#include <iostream>
#include <string>
using namespace std;


class bank{

private:
double salary;
int password;

public:
bank (){
cout << "printing the constructor " << endl;
name = "lkm";
}

string name;
string usename;


void setsal(double s){
  salary = s;
}
double getsal(){
  return salary;
}


void setpass(int p){
  password = p;
}
int  getpass(){
  return password;
}



};
int main(){
// non-parametrized constructor 
bank b1;  // constructor call 

b1.usename = "@lkm2004";

b1.setsal(311.31);
b1.setpass(34);

cout << b1.name << endl;
cout << b1.usename << endl;
cout << b1.getsal() << endl;
cout << b1.getpass()<< endl;



  return 0;
}