#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vv{10,20,30};
    vv.push_back(40);
    vv[0] = 100;
    cout << vv[0] << ":" << vv.at(2) << endl;

    for (int i = 0; i < vv.size(); ++i) {
        cout << i << "=" << vv[i] << endl;
    }

    for(int s:vv){
       cout << s << endl;
    }
    return 0;
}
