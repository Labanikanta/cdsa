#include <iostream>
using namespace std;
int main (){
    int n;
    int oddsum =0;
    cin >> n;
    for (int i=1;i<=n;i++){
       if (i % 2!=0){
        oddsum+=i;
       }
    }
    cout << oddsum << endl;
    return 0 ;
    
}


