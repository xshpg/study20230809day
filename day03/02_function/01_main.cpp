#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int &b = a;
    cout << "a=" <<  a << &a << endl;
    cout << "b=" << b << &b << endl;
    a = 5;
    cout << "a=" << a<< &a << endl;
    cout << "b=" <<b <<&b << endl;
    return 0;
}
