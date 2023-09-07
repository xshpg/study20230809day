#include <iostream>

using namespace std;

int main() {
    int score[]{1,2,3,4,5};
    int *p = score;
    while (p < (p+5)){
        cout << *p << endl;
        p++;
    }
    int score2[]{11,22,33,44,55};
    int * ps = &score2[sizeof(score2)/sizeof(int)-1];
    cout << ps << endl;
    while (ps >= score2){
        cout << *ps << endl;
        ps--;
    }
    return 0;
}
