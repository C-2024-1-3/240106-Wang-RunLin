#include <iostream>
using namespace std;
int gcd(int a, int b) ;
int lcm(int a, int b) ;
int main() {
    int a,b;
    cout<<"输入两个正整数："<<endl;
    cin>>a>>b;
    if(a<=0||b<=0) {
        cout<<"请输入正整数"<<endl;
    }
    else {
        cout<<"最大公约数"<<gcd(a,b)<<endl;
        cout<<"最小公倍数"<<lcm(a,b)<<endl;
    }
    return 0;

}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b) * b);
}