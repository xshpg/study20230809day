#include <iostream>

using namespace std;

void func2(int &x,int y,int z){
    x+= y + z;
}

int func(int a,int b){
    int result{};
    result += a+b;
    func2(result,a,b);
    return result;
}


int main() {
    int x{10};
    int y{20};
    int z{};
    z = func(x,y);
    cout << z << endl;
    return 0;
}
