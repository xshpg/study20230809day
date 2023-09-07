#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "abc123";
    cout << "str[1]" << str[1] << endl;
    cout << str.at(2) << endl;

    str = str + "bdkl";
    cout << str << endl;

    cout << str.length() << endl;

    cout << str.find('e') << endl;

    string result = str.substr(str.find('c')+1);
    cout << result << endl;

    cout << str.substr(0,str.find('c'));

    string cc = "hello";
    cout << cc.substr(0,3) << endl;
    isalpha(2);
    isdigit('d');
    return 0;
}
