#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "enter the last number to printed" << endl;
  cin >>n;
  for (int i=1;i<=n;i++){
    cout << i<< endl;
  }
  return 0;
}

/*
IN WHILE LOOP

#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "enter the last number to printed" << endl;
  cin >>n;
  int i=1
  while(i<=n){
  cout << i << endl;
  i++
  }
   
  return 0;
}


IN DO WHILE LOOP

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the last number to be printed: ";
    cin >> n;

    int i = 1; 
    do {
        cout << i << endl;
        i++;  // Increment
    } while (i <= n); 

    return 0;
}

*/