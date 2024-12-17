#include <iostream>
using namespace std;
const double PricePerApple =0.8;
int main() {
    int TotalApples = 0;
    int AppleToday = 2;
    double TotalCost = 0;
    int day = 1;
    TotalApples += AppleToday;
    TotalCost += PricePerApple * TotalApples;
    while (AppleToday<100) {
        day+=1;
        AppleToday *= 2;
        if(TotalApples + AppleToday>=100) {
            break;
        }
        TotalApples += AppleToday;
        TotalCost += PricePerApple * AppleToday;

    }
    cout << "average cost: " << TotalCost/day << endl;
    return 0;

}

