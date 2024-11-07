#include <iostream>
using namespace std;
const double PI = 3.14159265358979323846;
int main() {
    double r,h,v;
    cout<<"Enter the radius of the cone:"<<endl;
    cin>>r;
    cout<<"Enter the height of the cone:"<<endl;
    cin>>h;
    v=PI*r*h;
    cout<<"The volume of the cone is:"<<v<<endl;
    return 0;
}
