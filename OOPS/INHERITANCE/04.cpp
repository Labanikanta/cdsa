#include <iostream>
#include<string>
using namespace std ;

class student {
public:
string name;
int rollno;
};

class teacher {
public:
string subject;
double salary;
};

class TA : public student,public teacher{
};


int main(){
TA t1 ;
t1.name = "tony stark";
t1.rollno = 118;
t1.subject = "b-tech in csit";
t1.salary = 23111.32;

cout <<t1.name << endl;
cout <<t1.rollno << endl;
cout << t1.subject<< endl;
cout << t1.salary<< endl;


  return 0 ;
}