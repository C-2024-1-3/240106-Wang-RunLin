#include <iostream>
using namespace std;
const int SIZE = 80;

void acsend(int arr[], int n);

int main() {
	int size1=0, size2=0;
	int arr[SIZE*2];
	cout << "请输入两个升序排列的数组，并分别在其前面输入总元素数目"<<endl;
	cout << "第一个数组： ";
	cin >> size1;
	for (int i = 0;i < size1;i++) {
		cin >> arr[i];
	}
	cout << "第二个数组： ";
	cin >> size2;
	for (int i = 0;i < size2;i++) {
		cin >> arr[i+size1];
	}
	acsend(arr, size1 + size2);
	cout << "合并后的数组： ";
	for (int i = 0;i < size1 + size2;i++) {
		cout << arr[i]<<" ";
	}
	return 0;
}

void acsend(int arr[], int n) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (n - 1); j++)
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}