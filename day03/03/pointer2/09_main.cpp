#include <iostream>

using namespace std;

int main() {
    int age = 345;
    int age2 = 55;
    const int * p = &age;
    p = &age2;
    int * const p2 = &age;
    *p2 = 67;
    const int * const p3 = &age;
    return 0;
}
