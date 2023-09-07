#include <iostream>
using namespace std;

int main() {
    int scores[2][3]{
            {11,444,55},
            {22,55,77}
    };
    cout << scores[1][2] << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << scores[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}
