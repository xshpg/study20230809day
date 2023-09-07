#include <iostream>
//#include <string>
using namespace std;
/*
 给定一串字符串，判定里面有多少个数字，多少个字母。并且把最后那个字母a修改为大写字母A
    修改用的函数是：replace（修改起始索引位置，修改的横跨长度，修改成什么字符）;
    判断是否是字母和数字使用的是 isalpha () 和  isdigit()  可以引入#include<ctype.h>
*/


int main() {
    string str = "abc123abcbcc";

    int alpah_count = 0;
    int digit_count = 0;

    for(char s:str){
        if(isalpha(s)){
            alpah_count++;
        }else if(isdigit(s)){
            digit_count++;
        }
    }
    count << "num total:" << digit_count << "str total" << alpah_count << endl;

    int index = str.rfind('a');

    str[index] = toupper(str[index]);
    cout << "str=" << str << endl;
    return 0;
}
