#include <iostream>
#include <vector>
#include "stu.h"

using namespace std;

int main() {
    vector<vector<int>> score_vector;

    cout << "init score" << endl;
    initScore(score_vector);

    cout << "update score" << endl;
    updateScore(score_vector);

    cout << "print score" << endl;
    printScore(score_vector);
    return 0;
}
