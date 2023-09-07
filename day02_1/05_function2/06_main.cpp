#include <iostream>

using namespace std;


void changescores(int s){
    s = 100;
}

int main() {
    int scores = 10;
    changescores(scores);
    cout << "score=" << scores << endl;
    return 0;
}
