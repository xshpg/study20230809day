#include <iostream>

using namespace std;

void changescore(int s){
    s = 100;
}

int main() {
    int score = 20;
    changescore(score);
    cout<< "score=" << score << endl;
    return 0;
}
