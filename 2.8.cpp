#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double a;
	cout << "������һ��a�ĳ�ֵ��" << endl;
	cin >> a;
	double Xn = a;
	double XN = (Xn + a / Xn) / 2;
	if (a <= 0) {
		cout << "���������Ϊ����" << endl;
	}
	else {
		while (fabs(XN - Xn) >= 1e-10) {
			Xn = XN;
			XN = (Xn + a / Xn) / 2;
		}
	}
	cout << "�����ֵ�ƽ����Ϊ��" << fixed<<setprecision(10)<< XN << endl;
	return 0;
}
	