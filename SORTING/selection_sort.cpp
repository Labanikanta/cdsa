#include <iostream>
using namespace std;


void sessort(int arr[],int n){
   for(int i = 0;i<n-1;i++){
     int smallestindex = i; // unsorted part starting index
      for(int j = i+1;j<n;j++){
         if (arr[j] < arr[smallestindex]){ // for desc only it change from "<" to ">" .
            smallestindex = j;
         }
      }
       swap(arr[i],arr[smallestindex]);
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
sessort(arr,n);
printarray(arr,n);
  return 0;
}
