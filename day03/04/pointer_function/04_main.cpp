#include <iostream>

using namespace std;

int main() {
    int age = 12;
    cout << &age << endl;
    int * p = &age;
    cout << "age=" << age << endl;
    cout << "p=" << p << endl;
    cout << "p==" << *p << endl;
    int ** p2 = &p;
    cout << "p2=" << **p2 << endl;
    int pa = 34;
    int *ps = &pa;
    cout << "ps" << *ps << endl;
    cout << "pa" << *&pa << endl;
    return 0;
}
