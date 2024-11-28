/*
#include <iostream>
#include <cmath>
using namespace std;
void gcd(int a, int b, int& gcd_value);
void lcm(int a, int b, int& gcd_value, int& lcm_value);


int main() {
    cout << "请输入两个整数: " << endl;
    int a, b;
    cin >> a >> b;
    if (a == 0 || b == 0) {
        cout << "错误：输入的整数不能为零！" << endl;
        return 1;
    }
    int lcm_value = 1;
    int gcd_value = 1; 
    gcd(a, b, gcd_value);
    lcm(a, b, gcd_value, lcm_value);
    cout << "最大公因数： " << gcd_value << endl;
    cout << "最小公倍数： " << lcm_value << endl;
    return 0;
}

void gcd(int a, int b, int& gcd_value) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd_value = a;
}

void lcm(int a, int b, int& gcd_value, int& lcm_value) {
    lcm_value = abs(a * b) / gcd_value;
}
*/
#include <iostream>;
#include <cmath>
using namespace std;

bool is_prime(int num);

int main() {
	int num;
	cout << "请输入一个整数" << endl;
	if (is_prime(num)) {
		cout << "这是一个素数。";
	}
	else {
		cout << "这不是一个素数。";
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
		for (int i = 3, i < sqrt(num);i++) {
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}