#include <iostream>
using namespace std;
int main() {
	int a, b,yuenum,beinum;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0) {
		for (yuenum =min(a,b); yuenum <= min(a, b); --yuenum) {
			if (a % yuenum == 0 && b % yuenum == 0) {
				cout << "最大公约数为："  << yuenum<<endl;
			}
			break;
		}
	}
	beinum = (a * b) / yuenum;
	cout << "最小公倍数为：" << beinum<<endl;
	return 0;
}