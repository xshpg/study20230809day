#include <iostream>
#include <vector>

using namespace std;

void changescore(vector<int> * vi){
    for(int & s: *vi){
        if(s < 60){
           s= 99;
        }
    }
}

int main() {
    vector<int> vi{11,22,33,44,55,90};
    changescore(&vi);
    for(int v : vi){
        cout << v << endl;
    }
    return 0;
}
