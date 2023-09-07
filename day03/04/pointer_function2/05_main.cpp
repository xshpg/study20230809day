#include <iostream>

using namespace std;

void initPointer(int ** a){
     * a = new int();
}

int main() {
    int *p = nullptr;
    initPointer(&p);
    cout << "p=" << p << endl;
    cout << "p===" << *p << endl;
    return 0;
}
