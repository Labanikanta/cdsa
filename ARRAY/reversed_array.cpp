#include <iostream>
using namespace std;

void ra (int arr[], int sz){
  int start = 0, end = sz-1;
  while (start < end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

void prarr(int arr[],int sz){
  for (int i=0; i<sz ; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}



int main(){
int arr[] = {4,2,7,8,1,2,5,3};
int sz = 8;
cout << "original array :" ;
prarr(arr,sz);

ra(arr,sz);
cout << "reversed array :";
for (int i = 0 ; i<sz;i++){
   cout << arr[i] << " " ;
}
cout << endl;
  return 0 ;
}