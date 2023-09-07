#include <iostream>

using namespace std;

void sayHi(){
    cout << "hi amos" << endl;
}

void sayHi2(string name){
    cout << "hello:" << name << endl;
}

string sayHi3(){
    return "nice to meet you";
}

string sayHi4(string name){
    return "nice to meet you too" + name;
}

int main() {
    sayHi();
    sayHi2("doudou");
    cout <<sayHi3() <<endl;
    cout <<sayHi4("kaka") <<endl;
    return 0;
}
