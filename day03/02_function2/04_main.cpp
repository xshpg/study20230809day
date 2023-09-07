#include <iostream>

using namespace std;

inline int add(int a,int b){
    return a+b;
}

int main() {
    int num = 2;
    int num2 = 3;
    cout << add(num,num2) << endl;
    return 0;
}
