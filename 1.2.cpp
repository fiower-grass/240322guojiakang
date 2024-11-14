#include <iostream>
using namespace std;
int main() {
	const double pi = 3.14;
	double h, r,V;
	cout << "请输入圆锥的高和半径" << endl;
	cin >> h >> r;
	if ((h > 0) && (r > 0)) {
		V = (h * (pi)*r * r) / 3;
		cout << "圆锥的体积为：" << V<<endl;
	}
	else {
		cout << "无法形成圆锥" << endl;

	}
	return 0;
}