#include <iostream>
#include "point.h"
using namespace std;
int main() {
    Point p1(60,80);
    int i,j;
    p1.display();
    cout<<"Enter value for i and j"<<endl;
    cin>>i>>j;
    p1.setPoint(i,j);
    p1.display();
    return 0;
}
