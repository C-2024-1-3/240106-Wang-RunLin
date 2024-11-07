#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Please enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << static_cast<char>(toupper(ch));
    }
    else {
        cout << static_cast<int>(ch) + 1;
    }
    return 0;
}
