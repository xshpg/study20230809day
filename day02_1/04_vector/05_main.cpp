#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi{11,22,33};
    vector<vector<int>> vv{
            {11,22,33},
            {12,13,14},
            {33,55,66}
    };

    for (int i = 0; i < vv.size(); ++i) {
        for (int j = 0; j < vv[0].size(); ++j) {
            cout << vv[i][j] << endl;
        }
        cout << endl;
    }

    cout << "-----------" << endl;
    for(vector v:vv){
        for(int s:v){
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
