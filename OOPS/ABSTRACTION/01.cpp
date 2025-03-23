#include <iostream>
#include<string>
using namespace std;
class Shape {
public:

virtual void draw()=0;// pure virtual function
};

class Circle : public Shape{
public:
void draw(){

  cout << " this is shape of circle " << endl;
}
};
int main(){
Circle c1;
c1.draw();

// Shape s1; // thsi show a error
// s1.draw();

  return 0;
}