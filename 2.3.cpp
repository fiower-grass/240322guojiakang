#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "�����������ε����߳���" << endl;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		double circ = a + b + c;
		cout << "�����ε��ܳ�Ϊ��" << circ << endl;
		if (a == b || b == c || a == c) {
			cout << "��������Ϊ����������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "�޷�����������" << endl;
	}
	return 0;
} 