#include <iostream>
using namespace std;
int main() {
    int n, x;
    cout << "Enter how many groups of symbols to be printed: ";
    cin >> n;
    cout << "Enter how many symbols in each group: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= x; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}
