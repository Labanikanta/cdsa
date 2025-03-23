#include <iostream>
#include <string>
using namespace std;


class bank{

private:
double salary;
int password;

string  showkey(double key){
  return "this is the key of my bank :" +to_string(key);
}


public:
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

string acceskey(double key ){
  return showkey(key);
}

};



int main(){
bank b1;  

b1.name = "labanikanta";
b1.usename = "@lkm2004";



b1.setsal(311.31);
b1.setpass(34);

cout << b1.name << endl;
cout << b1.usename << endl;
cout << b1.getsal() << endl;
cout << b1.getpass()<< endl;
cout << b1.acceskey(122.12) << endl;


  return 0;
}