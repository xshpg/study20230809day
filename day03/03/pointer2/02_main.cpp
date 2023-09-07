#include <iostream>

using namespace std;

int main() {
    int age = 30;
    int * p = &age;
    cout << "p=" << p << endl;
    int age2 = 39;
    p = &age2;
    cout << "p=" << p << endl;
    return 0;
}
