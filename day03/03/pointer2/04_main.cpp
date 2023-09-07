#include <iostream>

using namespace std;

int main() {
    int age = 88;
    int * p = &age;
    cout << "p=" << *p << endl;
    *p = 44;
    cout << "p==" << *p << endl;
    int * p2 = new int(11);
    cout << "p2=" << *p2 << endl;
    *p2 = 34;
    cout << "p2==" << *p2 << endl;
    return 0;
}
