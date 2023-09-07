#include <iostream>

using namespace std;

int main() {
    int score[]{11,22,33,44,55};
    cout << "score=" << score << endl;
    cout << "score[0]" << &score[0] << endl;
    int * p = score;
    cout << "p=" << p << endl;
    *p = 30;
    cout << "p==" << *p << endl;
    *score = 89;
    cout << "===============" << endl;
    cout << "one num" << *p << endl;
    cout << "town num" << * (p + 1) << endl;
    return 0;
}
