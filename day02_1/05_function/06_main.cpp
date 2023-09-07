#include <iostream>

using namespace std;

void changescore(int s){
    s = 100;
}

int main() {
    int score = 50;
    changescore(score);
    cout << "scores" << score << endl;
    return 0;
}
