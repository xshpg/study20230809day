#include <iostream>

using namespace std;

int main() {
    int a = 90;
    int * p = &a;

    int * p2 = new int(200);
    delete p2;
    return 0;
}
