#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[] = "abc124";
    cout << "length 1" << sizeof(c)/sizeof(char) << endl;
    cout << "length 2" << strlen(c) << endl;

    strcat(c,"acb");
    cout << "c=" <<c << endl;

    char d[1];
    strcpy(d,c);
    cout << "d=" << d << endl;
    return 0;
}
