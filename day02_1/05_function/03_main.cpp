#include <iostream>

using namespace std;


void sayHi();

int main() {
    sayHi();
    return 0;
}

void sayHi(){
    cout << "先声明，再实现" << endl;
}