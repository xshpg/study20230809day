#include <iostream>
using namespace std;

int main() {
    string str = "abc123aabbaacd";
    int alpa_count = 0;
    int digit_count = 0;
    for(char s:str){
        if(isalpha(s)){
            alpa_count++;
        }else if(isdigit(s)){
            digit_count++;
        }
    }

    cout << "num total" << digit_count << "str total" << alpa_count << endl;

    ind index = str.rfind('a');
    str[index] = toupper(str[index]);
    cout << "str=" << str << endl;
    return 0;
}
