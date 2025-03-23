#include <iostream>
using namespace std;
int main (){
    int n;
    int evensum =0;
    cin >> n;
    for (int i=1;i<=n;i++){
       if (i%2==0){
        evensum+=i;
       }
    }
    cout << evensum << endl;
    return 0 ;
    
}


