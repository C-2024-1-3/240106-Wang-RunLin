#include <iostream>
using namespace std;
const int day = 10;

void eat_reverse(int& num,int i);

int main() {
	int peach = 1;
	eat_reverse(peach,0);
	cout << "第一天：" << peach;
	return 0;
}

void eat_reverse(int& num,int i) {
	if (i == day) {return;}
	num = (num + 1) * 2;
	eat_reverse(num,i+1);
}