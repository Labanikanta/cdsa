#include <iostream>
#include <string>
using namespace std;

class teacher {

private:
double salary;

public:
string name ;
string dept;
string subject;

//setter funcion
void setSalary(double s){
  salary = s  ;
}

//getter function
double getSalary(){
  return salary;
}

void changedept(string newdept){
  dept = newdept;
}

};

int main(){
teacher t1;
t1.name = "labani";
t1.dept = "cse";
t1.subject = "c++";
t1.changedept("ribben");

t1.setSalary(5000.80);

cout << t1.name << endl;
cout << t1.dept << endl;

cout <<t1.getSalary() << endl;

  return 0;
}