#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout<<"Enter the sides of the triangle: ";
    cin>>a>>b>>c;
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "三角形的周长为：" << perimeter << endl;
        if (a == b || a == c || b == c) {
            cout << "该三角形是等腰三角形。" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形。" << endl;
        }
    }
    else {
        cout << "无法构成三角形。" << endl;
    }
    return 0;
}