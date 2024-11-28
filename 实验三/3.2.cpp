#include <iostream>;
#include <cmath>
using namespace std;

bool is_prime(int num);

int main() {
	int prime_arr[200];
	int count = 0;
	int i = 2;
	while (count < 200) {
		if (is_prime(i)) {
			prime_arr[count] = i;
			count++;
		}
		i++;
	}
	for (int j = 0;j < 20;j++) {
		for (int k = 0;k < 10;k++) {
			cout << prime_arr[10*j+k] <<"\t";
		}
		cout << endl;
	}
	return 0;
}

bool is_prime(int num) {
	if (num <= 1) {
		return false;
	}
	else if (num == 2) {
		return true;
	}
	else if (num % 2 == 0) {
		return false;
	}
	else {
		for (int i = 3; i <= sqrt(num);i++) {
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}