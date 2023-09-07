#include <iostream>
#include <vector>
#include "stu3.h"

using namespace std;


int main() {
    vector<vector<int>> score_vector;
    initScore(score_vector);
    updateScore(score_vector);
    printScore(score_vector);
    return 0;
}
