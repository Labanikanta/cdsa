#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec1;
  cout << "before vector size = " << vec1.size() << endl;

  vec1.push_back(5);
  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(8);

  cout << "after adding a element,vector size = " << vec1.size() <<endl;
  
  cout << "print the vec1 elemnts" << endl;
  for (int i : vec1)
  {
    cout << i << " ";
  }
  cout << endl;





  vector<char> vec2 = {'a', 'b', 'c', 'd'};
  cout << "size = " << vec2.size() << endl;
  cout << "print the vec2 elements" << endl;
  for (char i : vec2)
  {
    cout << i << endl;
  }

  return 0;
}
