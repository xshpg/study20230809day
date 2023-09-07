#include <iostream>

using namespace std;

int printscore(int s[],int size){
    cout << size << endl;
    for (int i = 0; i < size; ++i) {
        cout << s[i] << endl;
    }
}

int main() {
    int scores[]{11,22,33,44,55};
    printscore(scores,sizeof(scores)/sizeof(int));
    return 0;
}
