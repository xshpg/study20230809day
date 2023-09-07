#include <iostream>

using namespace std;

int main() {
    int age = 55;
    int age2 = 56;
    const int *p = &age;
    p = &age2;
    int * const p2 = &age;
    *p2 = 90;
    const int * const p3 = &age;
    return 0;
}
