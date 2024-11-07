#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,x;
    cin >> a;
    x=(a+1)/2;
    if(a<0) {
        cout<<"wrong input"<<endl;
    }
    else {
        while (fabs(0.5*(a/x-x))>=1.0e-5) {
        x=0.5*(x+a/x);
        }
    }
    cout<<"actual value is "<<sqrt(a)<<endl;
    cout<<"final value is "<<x<<endl;
    return 0;

}

