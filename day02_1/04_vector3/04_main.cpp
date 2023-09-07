#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi{11,22,33};
    cout << "vi[0]" << vi[0] << endl;
    cout << "vi.at(1)" << vi.at(1) << endl;

    cout << "vi[4]" << vi[4] << endl;
    cout << "vi.at(4)" << vi.at(4) << endl;
    return 0;
}
