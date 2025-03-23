#include <iostream>
#include <string>
using namespace std;

class teacher {
// properties or attributes
public:
string name ;
string dept;
string subject;
double salary;

// method or member functions
void changedept(string newdept){
  dept = newdept;
}

};

int main(){
teacher t1;
t1.name = "labani";
t1.dept = "cse";
t1.salary= 50000;
t1.subject = "c++";
t1.changedept("ribben");

cout << t1.name << endl;
cout << t1.dept << endl;
cout << t1.salary << endl;
cout << t1.subject << endl;
cout << t1.dept << endl;

  return 0;
}