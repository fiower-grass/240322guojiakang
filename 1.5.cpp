#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "请输入华氏温度：" << endl;
	cin >> F;
	if (32 <= F <= 212) {
		C = (F - 32) / 18;
		cout << "摄氏温度为：" <<fixed<< setprecision(2)<< C<< endl;
	}
	else {
		cout << "您所输入的温度不存在" << endl;
	}
	return 0;
}