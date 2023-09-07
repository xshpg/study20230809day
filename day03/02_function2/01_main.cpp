#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int &b = a;
    cout << "a=" << a << "address=" << &a<< endl;
    cout << "b=" << b << "adddres=" <<&b<< endl;
    a = 3;
    cout << "a=" << a << "address=" <<&a << endl;
    cout << "b=" << b << "address=" <<&b << endl;
    return 0;
}
