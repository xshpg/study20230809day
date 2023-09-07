#include <iostream>

using namespace std;

int main() {
    int age = 100;
    cout << &age << endl;
    int * p = &age;
    cout << "p=" << p << endl;
    cout << "p==" << *p << endl;
    int ** p1 = &p;
    cout << "p1=" << **p1 << endl;
    cout << "p1==" << p1 << endl;
    int age2 = 99;
    int *pa = &age2;
    cout << "pa=" << *pa << endl;
    cout << "age2" << *&age2 << endl;
    return 0;
}
