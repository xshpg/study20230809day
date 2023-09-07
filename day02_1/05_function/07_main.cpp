#include <iostream>

using namespace std;

void changescore(int s[]){
    s[2]= 88;
}

int main() {
    int score[]{10,20,30,40,50};
    changescore(score);
    for(int s:score){
        cout << s << endl;
    }
    return 0;
}
