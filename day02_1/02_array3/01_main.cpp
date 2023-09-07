#include <iostream>
using namespace std;

int main() {
    int scourse[]{10,20,30,40,50};
    for (int i = 0; i < sizeof(scourse)/sizeof(int); ++i) {
        cout << i <<"=" << scourse[i] << endl;
    }

    cout << "------------------"<<endl;
    for(int s:scourse){
        cout << "s=" << s << endl;
    }

    cout << "------" <<endl;

    for(auto m:scourse){
        cout << "m=" << m << endl;
    }
    return 0;
}
