//
// Created by xshgp on 2023/8/24.
//

#include "stu2.h"
#include <vector>

using namespace std;

void initScore(vector<vector<int>> &score_vector){
    cout << "input score" << endl;
    for (int i = 0; i < 3; ++i) {
        vector<int> vi;
        cout << "input student num" << i+1 << "score" << endl;
        for (int j = 0; j < 6; ++j) {
            cout << "num" << j+1 << "score" << endl;
            int temp;
            cin >> temp;
            vi.push_back(temp);
        }
        score_vector.push_back(vi);
    }
}

void updateScore(vector<vector<int>> &score_vector){
    for (vector<int> &vi:score_vector) {
        for(int &s:vi){
            if(s <60){
                s = 99;
            }
        }
    }
}


void printScore(vector<vector<int>> score_vector){
    for(vector<int> vi:score_vector){
        for(int s: vi){
            cout << s << "\t";
        }
        cout << endl;
    }
}