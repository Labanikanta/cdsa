#include <iostream>
#include<string>
using namespace std ;
class person {
  public : 
  string name;
  int age;

  // person(string name , int age)  {
  //   this->name = name ;
  //   this->age = age ; 
  // }

  person(){
  cout << "parent costructor " << endl;

  }

  ~ person(){
    cout << "parent destructor" << endl ;
  }
};

class student : public person{
public:
int rollno;


student(){
  cout << "child constructor " << endl;
}
~student(){
  cout << "child destrcutor " << endl;
}

void getinfo(){
cout << "name " << name << endl;
cout << "age" << age << endl;
cout << "rollno" << rollno<< endl;

}
};



int main(){
student s1 ;
s1.name = "Rahul";
s1.age = 21;
s1.rollno = 24;

s1.getinfo();
  return 0 ;
}