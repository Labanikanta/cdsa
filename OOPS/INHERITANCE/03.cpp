#include <iostream>
#include<string>
using namespace std ;
class person {
  public : 
  string name;
  int age;

};

class student : public person{
public:
int rollno;
};


class gradstu : public student{
public :
string researea;
};


int main(){
gradstu s1 ;
s1.name = "tony stark";
s1.researea  = "jarvis";
s1.rollno = 118;
cout <<s1.name << endl;
cout <<s1.researea << endl;
cout << s1.rollno << endl;

  return 0 ;
}