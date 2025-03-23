#include <iostream>
using namespace std;
int linearsearch(int arr[], int size,int target){
 for (int i =0;i<size;i++){
  if (arr[i]==target){
    return i;
  }
 }
 return -1;
}
  
int main(){
int arr[] = {4,2,7,8,1,2,5,3};
int size = 8;
int target = 1;
cout << linearsearch(arr,size,target) << endl;
  return 0 ;
}