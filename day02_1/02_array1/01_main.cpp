#include <iostream>
using namespace std;

int main() {
    int scouces[]{10,20,30,30,40,50,60};
    for (int i = 0; i < sizeof(scouces)/sizeof(int); ++i) {
        cout << i << "=" << scouces[i] << endl;
    }

    cout << "---------------------" <<endl;
    for(int s:scouces){
        cout << "s=" << s << endl;
    }

    cout << "---------------------" <<endl;
    for(auto n :scouces){
        cout << "n=" << n << endl;
    }
    return 0;
}
