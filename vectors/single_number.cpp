#include <iostream>
#include <vector>
using namespace std;
int singlenum(vector<int>&num){
  int ans = 0;
  for(int val : num){
    ans = ans ^ val;
  }
  return ans ;

}

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> num(n);
  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; i++) {
      cin >> num[i];
  }

  int result = singlenum(num);
  cout << "The single number is: " << result << endl;
    return 0;


}
