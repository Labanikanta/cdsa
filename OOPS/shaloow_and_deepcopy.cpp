/*
#include <iostream>
#include<string>
using namespace std;
class student {
public:
string  name;
double  cgpa;
student(string name ,double cgpa ){
this->name = name;
this->cgpa = cgpa;
}
student(student &obj){
  this->name = obj.name;
  this->cgpa =obj.cgpa;
}
void getinfo(){
  cout << "name:" << name << endl;
  cout << "cgpa:"  << cgpa << endl;
}

};
int main(){
student s1("rahulkumar",8.98);
//s1.getinfo();

student s2(s1);
s2.getinfo();
  return 0;
}
*/

/*
// this leads to the issue of shallowcopy 
#include <iostream>
#include<string>
using namespace std;
class student {

public:
string  name;
double*  cgpaptr;
student(string name ,double cgpa ){
this->name = name;
cgpaptr = new double;
*cgpaptr = cgpa;
}

// student(student &obj){
//   this->name = obj.name;
//   this->cgpaptr =obj.cgpaptr;
// }
void getinfo(){
  cout << "name:" << name << endl;
  cout << "cgpa:"  << *cgpaptr << endl;
}

};
int main(){
student s1("rahulkumar",8.98);
student s2(s1);


s1.getinfo();
*(s2.cgpaptr) = 9.2;
s1.getinfo();
  return 0;
}
*/

  
// this leads to the solve  of shallowcopy  means deepcopy 
#include <iostream>
#include<string>
using namespace std;
class student {

public:
string  name;
double*  cgpaptr;
student(string name ,double cgpa ){
this->name = name;
cgpaptr = new double;
*cgpaptr = cgpa;
}

student(student &obj){
  this->name = obj.name;
  cgpaptr = new double;
  *cgpaptr = *obj.cgpaptr;
}

void getinfo(){
  cout << "name:" << name << endl;
  cout << "cgpa:"  << *cgpaptr << endl;
}

};
int main(){
student s1("rahulkumar",8.98);
student s2(s1); // neha 
s2.name = "neha";

s1.getinfo();
*(s2.cgpaptr) = 9.2;
s2.getinfo();

  return 0;
}
