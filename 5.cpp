#include <iostream>
using namespace std;
int main() {
    double Fahrenheit, Celsius;
    cout<<"Enter Fahrenheit: ";
    cin>>Fahrenheit;
    Celsius = (Fahrenheit - 32)/1.8;
    cout<<"Celsius = "<<Celsius<<endl;
    return 0;
}