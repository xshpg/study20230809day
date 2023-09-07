#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[] = "abc123";
    cout << "length 1" << sizeof(c)/sizeof(char) << endl;
    cout << "length" << strlen(c) << endl;

    strcat(c,"abc");
    cout << "c=" <<c <<endl;
    char d[1];
    strcpy(d,c);
    cout << "d=" << d<< endl;
    return 0;
}
