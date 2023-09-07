#include <iostream>
#include <vector>


using namespace std;

int main() {
    vector<int> vi{10,20,30};
    vi.push_back(49);
    vi[0] = 100;
    cout << vi[0] << ":" << vi.at(2) << endl;

    for (int i = 0; i < vi.size(); ++i) {
        cout << i << "=" << vi[i] << endl;
    }

    for(int s :vi){
        cout << s << endl;
    }
    return 0;
}
