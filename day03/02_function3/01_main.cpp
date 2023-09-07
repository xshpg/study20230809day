#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int &b = a;
    cout << "a=" << a << "address=" << &a << endl;
    cout << "b=" << b << "addres=" << &b << endl;

    a = 3;
    cout << "a=" << a << "address=" << &a << endl;
    cout << "b=" << b << "adddrss=" << &b << endl;
    return 0;
}
