#include <iostream>

using namespace std;

void func2(int &x,int y ,int z){
    x += y + z;
}

int func(int a,int b){
    int result{};
    result += a +b;
    func2(result,a,b);
    return result;
}

int main() {
    int a{10};
    int b{20};
    int c{};
    c = func(a,b);
    cout << c << endl;
    return 0;
}
