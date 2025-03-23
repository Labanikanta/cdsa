#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];
    cout << " enter the marks :" ;
    for (int i = 0 ; i <size;i++){
      cin >>marks[i];
    }

    cout << " the uploaded marks are :" ;
    for (int i = 0 ; i<size;i++){
      cout << marks[i] << " ";
    }
    cout << endl;
    

    return 0;
}

