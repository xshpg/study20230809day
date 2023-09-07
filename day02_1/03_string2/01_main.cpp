#include <iostream>
using namespace std;

int main() {
    char c[]{'a','b','v','\0'};
    cout << "c length" << sizeof(c)/sizeof(char)<<endl;
    for (int i = 0; i < 4; ++i) {
        cout << i << "==" <<c[i] << endl;
    }
    char name[] = "a";
    cout << "name length" << sizeof(name)/sizeof(char) << endl;
    for (int i = 0; i < 2; ++i) {
        cout << i << "==" << name[i] << endl;
    }
    return 0;
}
