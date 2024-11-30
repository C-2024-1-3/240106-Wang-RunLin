#include <iostream>
#include <string.h>
using namespace std;
const int SIZE = 40;

int indexOf(const char s1[], const char s2[]);

int main() {
    char s1[SIZE];
    char s2[SIZE];
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "indexOf(\"" << s1 << "\" and \"" << s2 << "\") is: "<< indexOf(s1,s2);return 0;
    }

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0;i < len2-len1;i++) {
        int j = 0;
        while (j < len1 && s2[i + j] == s1[j]) {
            ++j;
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}
