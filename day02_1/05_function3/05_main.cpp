#include <iostream>

using namespace std;

int add(int a,int b){
    return a +b;
}

int add(int a,int b,int c){
    return a + b;
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
    add(1.3,3);
    add(1,1.2);
    return 0;
}
