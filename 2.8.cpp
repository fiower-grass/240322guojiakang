#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double a;
	cout << "请输入一个a的初值：" << endl;
	cin >> a;
	double Xn = a;
	double XN = (Xn + a / Xn) / 2;
	if (a <= 0) {
		cout << "您所输入的为负数" << endl;
	}
	else {
		while (fabs(XN - Xn) >= 1e-10) {
			Xn = XN;
			XN = (Xn + a / Xn) / 2;
		}
	}
	cout << "该数字的平方根为：" << fixed<<setprecision(10)<< XN << endl;
	return 0;
}
	