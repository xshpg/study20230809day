#include <iostream>

using namespace std;

int main() {
    int age = 90;
    int * p = &age;
    cout << "p=" << *p << endl;
    *p = 30;
    cout << "p==" << *p << endl;
    int * p2 = new int(20);
    cout << "p2=" << *p2 << endl;
    *p2 = 33;
    cout << "p2==" << *p2 << endl;
    return 0;
}
