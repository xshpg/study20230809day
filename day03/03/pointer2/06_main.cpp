#include <iostream>

using namespace std;

int main() {
    int score[]{11,22,33};
    cout << "score" << score << endl;
    cout << "score[0]" << &score[0] << endl;
    int * p = score;
    *p = 34;
    cout << "p value" << *p << endl;
    cout << "================" << endl;
    cout << "p1=" << * p << endl;
    cout << "p2" << * (p+1) << endl;
    return 0;
}
