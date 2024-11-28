#include <iostream>
#include"mytriangle.h"
using namespace std;

int main() {
	double a, b, c;
	cout << "请输入三个数字代表三角形的边长" << endl;
	cin >> a >> b >> c;
	if(!is_valid(a,b,c)){
		cout << "不能组成三角形，程序结束" << endl;
		return 0;
	}
	else {
		cout << "三角形的面积是：" << area(a, b, c) << endl;
	}
	return 0;
}
