#include <iostream>

using namespace std;

int main() {
    int age = 20;
    int * p = &age;
    cout << "p=" << p << endl;
    int age2 = 30;
    p = &age2;
    cout << "p=" << p << endl;
    return 0;
}
