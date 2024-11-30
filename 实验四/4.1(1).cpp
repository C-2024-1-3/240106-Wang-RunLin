#include <iostream>
using namespace std;

bool is_distinct(int arr[], int size,int num);

int main() {
	int distinct_arr[10];
	int input[10];
	int count = 0;
	cout << "Enter ten numbers" << endl;
	for (int i = 0; i < 10; ++i) {
		cin >> input[i];
	}
	for (int i = 0; i < 10; ++i) {
		if (is_distinct(distinct_arr, count, input[i])) {
			distinct_arr[count++] = input[i]; 
		}
	}

	cout << "Unique numbers: ";
	for (int i = 0; i < count; ++i) {
		cout << distinct_arr[i] << " ";
	}
	cout << endl;

	return 0;
	cout << "The distinct numbers are: ";
	return 0;
}

bool is_distinct(int arr[], int size, int num) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == num) {
			return false;
		}
	}
	return true;
}
