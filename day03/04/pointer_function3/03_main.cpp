#include <iostream>
#include <synchapi.h>


using namespace std;

int * getMax(int * a,int * b){
    if(*a > * b){
        return a;
    }
    return b;
}

int main() {
    int num1 = 3,num2 = 5;
    int * result = getMax(&num1,&num2);
    cout << *result << endl;
    return 0;
}
