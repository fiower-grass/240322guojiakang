/*编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试。
函数原型 int parseHex(const char *const hexString);
如：调用函数 parseHex(“A5”);返回165
*/
#include <iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int size = strlen(hexString),sum=0;
	for (int i =size-1; i>=0; i--)
	{
		if (hexString[i] >= 0 && hexString[i] <= 9)
			sum = sum + hexString[i] * (16 ^ (size - i - 1));
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
			sum = sum + (static_cast<int>(hexString[i]) - 87) * pow(16, size - i - 1);
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
			sum = sum + (static_cast<int>(hexString[i]) - 55) * pow(16, size - i - 1);
	}
	return sum;
}
int main()
{
	const int MAX = 100;
	char hexString[MAX];
	cout << "请输入一个十六进制的数：" << endl;
	cin >> hexString;
	cout << "转化为十进制为：" << parseHex(hexString);

}