#include <iostream>


using namespace std;

int main() {
    int score[]{11,22,33,44,55,66};
    int * p = score;
    cout << "p=" << *p << endl;
    while (p < (p+6)){
        cout << * p << endl;
        p++;
    }
    cout << "====================================" <<endl;
    int score2[] = {10,20,30,40,50};
    int * pc = &score2[sizeof(score2)/sizeof(int)-1];
    while (pc >= score2){
        cout << *pc << endl;
    }
    return 0;
}
