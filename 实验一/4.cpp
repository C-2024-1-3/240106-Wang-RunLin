#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    unsigned int testUnint=65534;
    double testDouble=1.1;
    cout << "output in unsigned int 1 type:" << testUnint<< endl;
    cout << "output in integar:" << static_cast<int>(testDouble)<< endl;
    cout << oct << testUnint << endl;
}