/*
#include <iostream>
using namespace std;
int main(){
double mark ;
cout << " enter mark" << endl;
cin >> mark; 
if (mark >= 90){
  cout << "grade is A" << endl ;
}else if (mark >= 80) {
  cout << "grade is B" << endl ;
}else if (mark >= 75) {
  cout << "grade is C" << endl ;
}else if (mark >= 50) {
  cout << "grade is D" << endl ;
}else if (mark >= 45) {
  cout << "grade is E" << endl ;
}else if (mark >= 40) {
  cout << "grade is F" << endl ;
}
else {
  cout <<"otherwised fail"<< endl;
}

return 0;
}
*/
#include <iostream>
using namespace std;
int main(){
double mark;
cout << " enter mark " << endl;
cin >> mark ;
if (mark >= 90 ){
  cout << " grade is A" << endl;
}else if (mark >=80 && mark <90){
cout << " grade is B" << endl;
}else {
  cout << "grade is C" << endl; 
}

  return 0 ;
}