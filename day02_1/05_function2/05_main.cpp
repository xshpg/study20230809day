#include <iostream>

using namespace std;

int add(int a,int b){
    return a + b;
}

int add(int a,int b ,int c){
    return a *b *c;
}

double add(int a,double b){
    return a + b;
}

double add(double a,int b){
    return a + b;
}

int main() {
    add(1,2);
    add(1,2,3);
    add(1.3,1);
    add(2,4.5);
    return 0;
}
