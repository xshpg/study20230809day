#include <iostream>

using namespace std;


void changescore(int * a){
    *a = 100;
}

int main() {
    int score = 10;
    changescore(&score);
    cout << "score" <<score << endl;
    return 0;
}
