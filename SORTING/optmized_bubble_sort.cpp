#include <iostream>
using namespace std;
void bbsort(int arr[],int n){ 

  for (int i=0;i<n-1;i++){ 
    bool isSwap = false;

    for (int j=0;j<n-i-1;j++){ 
       if (arr[j] > arr[j+1]){ // for desc only it change 
        swap(arr[j],arr[j+1]);
        isSwap = true;
       }
    }
      if(!isSwap){ // array is already sorted 
        return;
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
int arr[] = {1,2,6,9,8};
bbsort(arr,n);
printarray(arr,n);
  return 0;
}
