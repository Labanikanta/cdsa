#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8); // capaccity is double of means (8 X 2 = 16 ) . 8 is the capacity of vec.push_back(4) .
    cout << vec.size() << endl;
    cout << vec.capacity()<< endl;
    return 0;


}
