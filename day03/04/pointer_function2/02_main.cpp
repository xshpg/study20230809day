#include <iostream>
#include <vector>


using namespace std;

void changescore(vector<int> * vi){
    for(int &s : *vi){
        if(s < 60){
            s =99;
        }
    }
}

int main() {
    vector<int> vi{67,23,89,56,90};
    changescore(&vi);
    for(int s :vi){
        cout << s << endl;
    }
    return 0;
}
