#include <iostream>

using namespace std;

void printscores(int score,int size){
    cout << size << endl;
    for (int i = 0; i < size; ++i) {
        cout << score[i] << endl;
    }
}

int main() {
    int score[]{11,33,55,66,77,88};
    printscores(score,sizeof(score)/ sizeof(int));
    return 0;
}
