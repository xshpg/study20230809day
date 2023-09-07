#include <iostream>

using namespace std;

int main() {
    int a = 20;
    int * p = &a;

    int * p2 = new int(200);
    cout << "p2" << p2 << endl;
//    p2 = p;
    delete p2;
    cout << "p2" << p2 << endl;
    return 0;
}
