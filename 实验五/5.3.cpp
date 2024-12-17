#include<iostream>
using namespace std;
class Column {
private:
    double length;
    double width;
    double height;
public:
    Column() {
        cout <<"Enter length: ";
        cin >> length;
        cout <<"Enter width: ";
        cin >> width;
        cout <<"Enter height: ";
        cin >> height;
    }
    double Volume(){
        return length * width * height;
    }
};
int main() {
    Column col[3];
    for (int i = 0; i <3; i++) {
        cout<<"volume"<<i+1<<": "<<col[i].Volume()<<endl;
    }
}