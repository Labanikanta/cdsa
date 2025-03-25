#include <iostream>
using namespace std;

void insesort(int arr[],int n ){
  for(int i=1;i<n;i++){
    int curr = arr[i];
    int prev = i-1;

  while (prev>=0 && arr[prev]>curr){
    arr[prev+1]= arr[prev];
    prev--;
  }
  arr[prev+1] = curr; // placing the ct elmntin the rgt pc  
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
insesort(arr,n);
printarray(arr,n);
  return 0;
}
