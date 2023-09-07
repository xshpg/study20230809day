#include <iostream>

using namespace std;

int main() {
    int age  = 33;
    int * p = &age;
    cout << "p1=" << p << endl;
    cout << "p2=" << p+1 << endl;
    cout << "p3=" << p +2 << endl;
    char c = 'c';
    char * pc = &c;
    cout << "pc=" << pc << endl;
    cout << "pc+1=" << pc +1 << endl;
    return 0;
}
