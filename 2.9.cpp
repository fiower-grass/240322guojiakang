#include <iostream>
using namespace std;
int main() {
	double price = 0.8, num = 2, cost = 0, average;
	int day = 0;
	for (num = 2; num <= 100; num=2 * num) {
		day++;
		num = +num;
	}
	cost = price * num;
	average = cost / day;
	cout << "一共需要买" << day << "天" << endl;
	cout << "每天的平均花费为：" << average << endl;

	return 0;
}