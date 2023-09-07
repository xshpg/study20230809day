#include <iostream>

using namespace std;

void changescore(int * s){
    *s = 100;
}

int main() {
    int a = 50;
    changescore(&a);
    cout << "a=" << a<< endl;
    return 0;
}
