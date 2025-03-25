#include <iostream>
using namespace std;
void bbsort(int arr[],int n){ // O(n^2)

  for (int i=0;i<n-1;i++){ //1*n
    for (int j=0;j<n-i-1;j++){ //n*n
       if (arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
       }
    }

  }
}


void printarray(int arr[],int n){
  for (int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
cout << endl;

}
int main(){
int n = 5;
int arr[] = {4,1,5,2,3};
bbsort(arr,n);
printarray(arr,n);
  return 0;
}
