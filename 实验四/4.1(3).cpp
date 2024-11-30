#include <iostream>
using namespace std;

void change(bool &x);
void student(int num, bool locker[]);

int main() {
	bool locker[100];
	for (int i = 0;i < 100;i++) {
		locker[i] = true;//第一个学生全打开
	}
	for (int i = 2;i < 100;i++) {//从第二个学生开始
		student(i, locker);
	}
	for(int i=0;i<100;i++){
		if (locker[i]) {
			cout << i+1 <<" ";
	}
	}
	return 0;
}

void change(bool &x) {
	if (x == true) {
		x = false;
	}
	else {
		x = true;
	}
}

void student(int num, bool locker[]) {
	for (int i = num;i <= 100;i++) {
		if (i % (num + 1) == num) {
			change(locker[i-1]);
		}
	}
}