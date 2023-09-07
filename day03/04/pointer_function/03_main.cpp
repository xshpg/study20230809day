#include <iostream>
#include <synchapi.h>

using namespace std;

int * getMax(int * a, int * b){
    if(*a > *b){
        return a;
    }
    return b;
}

int main() {
    int num1 = 2;
    int num2 = 3;
    int * result = getMax(&num1,&num2);
    Sleep(3000);
    cout << *result << endl;
    return 0;
}
