#include <iostream>
using namespace std;
int main() {
	int a, b,yuenum,beinum;
	cout << "������������������" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0) {
		for (yuenum =min(a,b); yuenum <= min(a, b); --yuenum) {
			if (a % yuenum == 0 && b % yuenum == 0) {
				cout << "���Լ��Ϊ��"  << yuenum<<endl;
			}
			break;
		}
	}
	beinum = (a * b) / yuenum;
	cout << "��С������Ϊ��" << beinum<<endl;
	return 0;
}