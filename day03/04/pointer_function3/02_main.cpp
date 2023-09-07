#include <iostream>
#include <vector>

using namespace std;

void changescore(vector<int> *vi){
    for(int &s:*vi){
        if(s < 60){
            s= 99;
        }
    }
}

int main() {
    vector<int> vi{11,45,76,89,67};
    changescore(&vi);
    for(int s:vi){
        cout << s << endl;
    }
    return 0;
}
