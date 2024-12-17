#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter operation: ";
    cin >> op;
    switch (op) {
        case '+':cout<<"result: "<<num1+num2<<endl;break;
        case '-':cout<<"result: "<<num1-num2<<endl;break;
        case '*':
            if(num2==0) {
                cout<<"wrong input"<<endl;
            }
            else {
                cout<<"result: "<<num1*num2<<endl;break;
            }
        case '/':cout<<"result: "<<num1/num2<<endl;break;
        case '%':
            if (static_cast<int>(num2) == 0) {
            cout << "wrong input" << endl;
            }
            else if (num1 != static_cast<int>(num1) || num2 != static_cast<int>(num2)) {
            cout << "wrong input" << endl;
            }
            else {
            cout << "result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
            }
        break;
        default:cout<<"Wrong input!"<<endl;
    }
    return 0;

}
