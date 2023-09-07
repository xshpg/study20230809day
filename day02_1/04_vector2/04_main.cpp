#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi{10,23,45};
    cout << "vi[0]" << vi[0] << endl;
    cout << "vi.at(0)" << vi.at(0) << endl;

    cout << "vi[8]" << vi[8] << endl;
    cout << "vi.at(8)" << vi.at(8) << endl;
    return 0;
}
