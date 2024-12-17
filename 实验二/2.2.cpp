#include <iostream>
using namespace std;
int main() {
    double x,y;
    for (int i = 1; i <= 4; i++) {
        cout << "Enter x: ";
        cin >> x;
        if(x > 0 && x < 1) {
            y=3-2*x;
            cout<<"y="<<y<<endl;
        }
        else if(x >= 1 && x < 5) {
            y=1/(2*x)+1;
            cout<<"y="<<y<<endl;
        }
        else if(x >= 5 && x <10) {
            y=x*x;
            cout<<"y="<<y<<endl;
        }
        else {
            cout<<"Wrong input"<<endl;
        }
    }
    return 0;
}
