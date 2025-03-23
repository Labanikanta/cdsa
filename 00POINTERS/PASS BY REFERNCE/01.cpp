/*
#include <iostream>
#include <vector>
using namespace std;

void changeA(int a ){ // this is pass by value 
           a = 20;
}

int main(){
int a = 10 ;
changeA(a);
cout << a << endl;

return 0;
}
*/


/*
#include <iostream>
#include <vector>
using namespace std;

void changeA(int* ptr ){  // pass by reference using pointer 
           *ptr = 20;
}

int main(){
int a = 10 ;
changeA(&a);
cout << a << endl;

return 0;
}
*/



#include <iostream>
#include <vector>
using namespace std;

void changeA(int &b){  // pass by alias  
           b = 20;
}

int main(){
int a = 10 ;
changeA(a);
cout << a << endl;

return 0;
}