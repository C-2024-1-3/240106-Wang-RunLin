#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int parseHex(const char *const hexString);

int main()
{
    cout <<"Enter a hexadecimal number: ";
    char hex[10];
    cin >> hex;
    cout <<"the decimal form is: "<<parseHex(hex);
    return 0;
}

int parseHex(const char *const hexString) {
    int len=strlen(hexString);
    int sum=0;
    for(int i = 0; i < len; ++i) {
        char ch=toupper(hexString[i]);
        int digitValue;
        if(isdigit(ch)){
            digitValue=ch-'0';
        }
        else if (ch >= 'A' && ch <= 'F'){
            digitValue=ch-'A'+10;
        }
        else {
            cout<<"Invalid Hexadecimal Number";
            return -1;
        }
        sum+=digitValue*pow(16,len - 1 - i);
    }
    return sum;
}
