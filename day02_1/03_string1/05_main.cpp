#include <iostream>

using namespace std;

int main() {
    string str = "abc123babbdd";
    int alpah_count =0;
    int digit_count = 0;

    for(char s:str){
        if(isalpha(s)){
            alpah_count++;
        }else if(isdigit(s)){
            digit_count++;
        }
    }

    int index = str.rfind('a');
    str[index] = toupper(str[index]);
    cout << "str=" << str << endl;
    return 0;
}
