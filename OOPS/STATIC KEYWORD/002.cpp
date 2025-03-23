#include <iostream>
#include <string>
using namespace std;

class A {
private:
    int x;
public:
    A() { x = 0; } // constructor initializes x

    void incx() {
        x++;
    }

    int getX() {
        return x;
    }
};

int main() {
    A obj;
    cout << obj.getX() << endl; // prints 0
    obj.incx();
    cout << obj.getX() << endl; // prints 1
    obj.incx();
    cout << obj.getX() << endl; // prints 2
    return 0;
}
