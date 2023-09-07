#include <iostream>

using namespace std;

void changescore(int s[]){
    s[2]= 00;
}

int main() {
    int score[]{11,22,33,44,55};
    changescore(score);
    for(int s:score){
        cout << s << endl;
    }
    return 0;
}
