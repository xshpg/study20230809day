#include <iostream>

using namespace std;

int main() {
    int a = 20;
    int * p = &a;

    int * p2 = new int(90);
    p2 = &a;

    return 0;
}
