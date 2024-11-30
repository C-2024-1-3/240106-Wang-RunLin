#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void count(const char s[],int counts[]);

int main() {
    cout<<"Enter a string"<<endl;
    char s[100];
    int counts[26]={0};
    cin.getline(s,100);
    count(s,counts);
    for(int i=0;i<26;i++) {
        if (counts[i]!=0) {
            cout<<char(i+'a')<<": "<<counts[i]<<" times"<<endl;
        }
    }
    return 0;
}

void count(const char s[],int counts[]) {
    int len=strlen(s);
    for(int i=0;i<len;i++) {
        if (isalpha(s[i])) {//检测是不是字母
            if(isupper(s[i])) {
                counts[s[i]-'A']++;//大写
            }
            else {
                counts[s[i]-'a']++;//小写
            }
        }
    }
}