#include<iostream>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int sec ;
public:
    Time() {
        hour = 0;
        minute = 0;
        sec = 0;
    }
    void setTime() {
        cin>>this->hour;
        cin>>this->minute;
        cin>>this->sec ;
    }
    void showTime() const {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};
int main()
{
    Time t1;
    t1.setTime();
    t1.showTime();
    return 0;
}
