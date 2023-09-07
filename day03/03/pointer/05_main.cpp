#include <iostream>

using namespace std;

void swaps(int * x,int * y){
    int temp = *x;
    * x = * y;
    * y = temp;
}

int main() {
    int a = 3;
    int b = 4;
    swaps(&a,&b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
