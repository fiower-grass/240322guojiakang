/*1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����*/
#include <iostream>
using namespace std;
long gcd(long &x, long &y) {
	for (long i = (x > y ? y : x); i > 0; i--) {
		if (x% i == 0 && y % i == 0)
		return i;
	}
	return 1;
}
long lcm(long& a, long& b) {
	for (long j=(a > b ? a : b); j >= (a > b ? a : b); j++) {
		if (j % a == 0 && j % b == 0)
	return j;
	}
	return 1;
}
int main() {
	long num1, num2;
	cout << "������������Ȼ����" << endl;
	cin >> num1 >> num2;
	if (num1 <= 0 || num2 <= 0) {
		return 1;
	}
	long maxnum, minnum;
	maxnum = gcd(num1, num2);
	minnum = lcm(num1, num2);
	cout << "�����������Լ��Ϊ��" <<maxnum<< endl;
	cout << "����������С������Ϊ��" << minnum << endl;
}
