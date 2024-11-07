#include <iostream>
#include <cctype>
using namespace std;

int main() {
    cout << "Enter text for analysis, and type @ to terminate:" << endl;
    char ch;
    int whitespace = 0;//空格
    int digits = 0;//数字字符
    int chars = 0;//字母字符
    int punct = 0;//标点符号
    int others = 0;//其他字符
    cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else if (isspace(ch)) {
            whitespace++;
        }
        else if (ispunct(ch)) {
            punct++;
        }
        else {
            others++;
        }
        cin.get(ch);
    }
    cout << chars <<"letters"<<endl;
    cout << whitespace<<"whitespace"<<endl;
    cout << digits<<"digits"<<endl;
    cout << punct<<"punctuations"<<endl;
    return 0;

}
