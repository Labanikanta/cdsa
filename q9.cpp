#include <iostream>
using namespace std;

double power(double m, int n = 2) {
    double result = 1;
    for (int i = 0; i < n; i++)
        result *= m;
    return result;
}

int power(int m, int n = 2) {
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= m;
    return result;
}

int main() {
    double dBase = 2.5;
    int iBase = 3, exponent = 3;

    cout << "Double power: " << power(dBase, exponent) << endl;
    cout << "Integer power: " << power(iBase, exponent) << endl;

    return 0;
}
