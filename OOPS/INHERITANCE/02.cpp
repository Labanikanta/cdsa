#include <iostream>
#include<string>
using namespace std ;
class person {
  public : 
  string name;
  int age;

  person(string name , int age)  {
    this->name = name ;
    this->age = age ; 
  }

};

class student : public person{
public:
int rollno;



student(string name,int age,int rollno):person( name, age){
  this->rollno = rollno;
}


void getinfo(){
cout << "name " << name << endl;
cout << "age" << age << endl;
cout << "rollno" << rollno<< endl;

}
};



int main(){
student s1("labani kanta ",21,1234);
s1.getinfo();
  return 0 ;
}