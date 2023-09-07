#include <iostream>

using namespace std;

int main() {
    int age =34;
    int *p = &age;
    cout << "p1=" << p << endl;
    cout << "p2=" << p+1 << endl;
    char c = 'c';
    char *pc = &c;
    cout << "pc=" << pc << endl;
    cout << "pc==" << pc + 1 << endl;
    return 0;
}
