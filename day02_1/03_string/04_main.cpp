#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abc123";
    cout << "str[1]" << str[1] <<endl;
    cout << "str[2]" << str.at(2) << endl;

    str = str + "efg";
    cout << "str=" << str << endl;

    cout << str.length() << "=" << str.size() << endl;

    cout  << str.find('3') << endl;

    string result = str.substr(str.find('c')+1);
    cout << "result" << result << endl;

    cout << str.substr(0,str.find('c')) << endl;

    string cc = "你好呀";
    cout << cc.substr(0,3) << endl;

    isalpha(2);
    isdigit('d');
    str.substr();
    return 0;
}
