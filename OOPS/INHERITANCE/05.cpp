#include <iostream>
#include <string>
using namespace  std;

class person{
public:
string name;
int age;
};

class student : public person{
public:
int rollno;
};

class teacher : public person{
  public:
  string subject;
  };
  
int main(){
student s;
s.name = "labanikanta";
s.age = 21;
s.rollno = 24;

teacher t;
t.name = "Labanikanta Majhi";
t.age = 40;
t.subject = "cn";


cout << "student :" <<s.name << "," << s.age << "," << s.rollno << endl;

cout << "teacher :" <<t.name << "," << t.age << "," << t.subject<< endl;

  return 0;
}