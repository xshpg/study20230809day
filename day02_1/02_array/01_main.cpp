#include <iostream>
using namespace std;

int main() {
    int scores[]{10,20,30,40,50,60};
    for (int i = 0; i < sizeof(scores)/sizeof(int); ++i) {
        cout <<i <<"=" <<scores[i] << endl;
    }
    cout << "---------------------" <<endl;
    for(int s :scores){
        cout << "s=" << s <<endl;
    }

    cout << "---------------------" <<endl;

    for(auto c:scores){
        cout << "c=" << c <<endl;
    }
    return 0;
}
