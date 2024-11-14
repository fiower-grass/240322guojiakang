#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三边长：" << endl;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		double circ = a + b + c;
		cout << "三角形的周长为：" << circ << endl;
		if (a == b || b == c || a == c) {
			cout << "该三角形为等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "无法构成三角形" << endl;
	}
	return 0;
} 