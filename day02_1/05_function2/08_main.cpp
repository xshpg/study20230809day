#include <iostream>

using namespace std;

void printscores(int score[],int size){
    cout << size << endl;
    for (int i = 0; i < size; ++i) {
        cout << score[i] << endl;
    }
}

int main() {
    int score[]{11,22,33,44,66};
    printscores(score,sizeof(score)/sizeof(int));
    return 0;
}
