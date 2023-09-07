#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi{10,20,30};
    cout << "vi[1]" << vi[1] << endl;
    cout << "vi.at(0)" << vi.at(0) << endl;

    cout << "vi[4]" << vi[4] << endl;
    cout << "vi.at(5)" << vi.at(5) << endl;
    return 0;
}
