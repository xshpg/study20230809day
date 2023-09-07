#include <iostream>


using namespace std;

void static_local_vieble(){
    static int age = 10;
    cout << "age1" << age << endl;
    age += 10;
    cout << "age2" << age << endl;
}

int b = 20;

int main() {
    static_local_vieble();
    static_local_vieble();
    {
        int a = 10;
    }
    return 0;
}
