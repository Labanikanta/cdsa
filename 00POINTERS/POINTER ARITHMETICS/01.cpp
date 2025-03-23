/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
int a = 10;
int* b = &a;

cout << b << endl;
//b++;
//b--;
b = b+2;

cout << b << endl;
return 0;
}

*/


/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr[] ={1,2,3,4,5};
cout << *arr << endl;
cout << *(arr+1) << endl;
cout << *(arr+2) << endl;
cout << *(arr+3) << endl;
cout << *(arr+4) << endl;
cout << *(arr+5) << endl;

return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr[] ={1,2,3,4,5};

int* ptr2; // 100
int* ptr1 = ptr2+2; //108

cout << ptr1-ptr2 << endl;
return 0;
}
*/


#include <iostream>
#include <vector>
using namespace std;
int main(){
int arr[] ={1,2,3,4,5};

int* ptr1; 
int* ptr2 = ptr1; 


cout << ptr1 << endl;
cout << ptr2 << endl;

cout << (ptr1!=ptr2) << endl;
return 0;
}