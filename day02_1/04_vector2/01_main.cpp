#include <iostream>
#include <vector>

using namespace std;

int main() {
    int age;
    int scores[6];

    vector<int> vv;

    vv.push_back(false);
    vv.push_back(true);
    vv.push_back(10);

    for(int v : vv){
        cout << "v=" << v << endl;
    }
    return 0;
}
