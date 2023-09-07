#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi{10,20,30};
    vi.push_back(40);
    vi.push_back(50);
    vi.push_back(60);

    vi[0] = 100;
    vi[1] = 21;
    cout << vi[0] << ":" << vi.at(3) << endl;

    for (int i = 0; i < vi.size(); ++i) {
        cout << i << "=" << vi[i] << endl;
    }

    for(int s:vi){
        cout << s << endl;
    }
    return 0;
}
