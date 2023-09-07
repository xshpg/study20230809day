#include <iostream>

using namespace std;

void func2(int &x,int y,int z){
    cout << "func2 x =" << x  << endl;
    cout << "func2 y =" << y  << endl;
    cout << "func2 z =" << z  << endl;
    x +=y + z;
    cout << "func21 x =" << x  << endl;
    cout << "func21 y =" << y  << endl;
    cout << "func21 z =" << z  << endl;
    cout << "x address" << &x << endl;
}

int func(int a,int b){
    int result{};
    result += a +b;
    cout << "result= a+b :" << result << endl;
    cout << "a=" << a  << endl;
    cout << "b=" << b  << endl;

    func2(result,a,b);
    cout << "result address" << &result << endl;
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
