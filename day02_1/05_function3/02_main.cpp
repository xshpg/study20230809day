#include <iostream>


using namespace std;

void add(){
    cout << 0 << endl;
}

void subtraction(int a,int b){
    cout << a +b << endl;
}

int multi(){
    return 0;
}

double divi(int a, int b){
    return a/b;
}

int main() {
    add();
    subtraction(1,2);
    cout <<multi()<<endl;
    cout <<divi(1,2)<<endl;
    return 0;
}
