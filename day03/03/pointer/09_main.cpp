#include <iostream>

using namespace std;

int main() {
    int age = 22;
    int age2 = 34;
    const int * p = &age;
    cout << p << endl;
    p = &age2;
    cout << p << endl;
    cout << "====" << endl;
    int * const p2 = &age;
    cout << *p2 << endl;
    *p2 = 55;
    cout << *p2 << endl;
    const int * const p3 = &age;
    return 0;
}
