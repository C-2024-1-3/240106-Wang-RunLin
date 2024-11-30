#include <iostream>
using namespace std;
const int listSize = 10;
void acsend(double arr[]);

int main() {
	double input_arr[listSize];
	cout << "输入十个双精度数字";
	for (int i = 0;i < listSize;i++) {
		cin >> input_arr[i];
	}
	acsend(input_arr);
	cout << "升序排列后：" << endl;
	for (int i = 0;i < listSize;i++) {
		cout << input_arr[i] << endl;
	}
	return 0;
}

void acsend(double arr[]) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listSize-1); j++)
			if (arr[j] > arr[j + 1])
			{
				double temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}