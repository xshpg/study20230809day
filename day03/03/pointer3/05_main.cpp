#include <iostream>

using namespace std;

void swaps(int * x,int * y){
    int temp;
    temp = * x;
    * x = * y;
    * y = temp;
}

int main() {
    int a = 4;
    int b = 6;
    swaps(&a,&b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
