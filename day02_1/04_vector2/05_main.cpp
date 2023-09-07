#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> vi{
            {11,22,33},
            {44,55,66},
            {10,20,30}
    };
    for (int i = 0; i < vi.size(); ++i) {
        for (int j = 0; j < vi[0].size(); ++j) {
            cout << vi[i][j] << endl;
        }
        cout <<endl;
    }

    for(vector v:vi){
        for(int s :v){
            cout << s << endl;
        }
        cout << endl;
    }
    return 0;
}
