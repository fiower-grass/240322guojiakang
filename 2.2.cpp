#include <iostream>
using namespace std;
int main() {
	double x, y;
	cout << "������x��ֵ��" ;
	cin >> x;
	if (0 < x < 10) {
		if (0 < x < 1) {
			double y = 3 - 2*x;
			cout << "y��ֵΪ��" << y << endl;
		}
		else if (1 <= x < 5) {
			double y = 2.0/ (4 * x) + 1;
			cout << "y��ֵΪ" << y<<endl;
		}
		else {
			double y = x * x;
			cout << "y��ֵΪ" << endl;
		}
	}

	return 0;
}