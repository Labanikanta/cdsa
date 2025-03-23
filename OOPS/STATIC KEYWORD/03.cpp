#include <iostream>
#include<string>
using namespace std;
class ABC {
  public:
  ABC(){
    cout << " constructor " << endl;
  }

  ~ABC(){
    cout << " destructor " << endl;
  }



};
int main(){
if(true){
static  ABC obj;
}
cout << " end of main fun" << endl;
  return 0;
}