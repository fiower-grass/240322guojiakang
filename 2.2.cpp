#include <iostream>
using namespace std;
int main() {
	double x, y;
	cout << "请输入x的值：" ;
	cin >> x;
	if (0 < x < 10) {
		if (0 < x < 1) {
			double y = 3 - 2*x;
			cout << "y的值为：" << y << endl;
		}
		else if (1 <= x < 5) {
			double y = 2.0/ (4 * x) + 1;
			cout << "y的值为" << y<<endl;
		}
		else {
			double y = x * x;
			cout << "y的值为" << endl;
		}
	}

	return 0;
}