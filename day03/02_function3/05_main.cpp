#include <iostream>

using namespace std;

void static_int_verble(){
    static int age = 20;
    cout << "age1=" << age << endl;
    age += 20;
    cout << "age2=" << age << endl;
}

int b = 20;

int main() {
    static_int_verble();
    static_int_verble();
    {
        int c = 20;
    }
    return 0;
}
