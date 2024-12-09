/*1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）*/
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
	cout << "请输入两个自然数：" << endl;
	cin >> num1 >> num2;
	if (num1 <= 0 || num2 <= 0) {
		return 1;
	}
	long maxnum, minnum;
	maxnum = gcd(num1, num2);
	minnum = lcm(num1, num2);
	cout << "两个数的最大公约数为：" <<maxnum<< endl;
	cout << "两个数的最小公倍数为：" << minnum << endl;
}
