/*��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в��ԡ�
����ԭ�� int parseHex(const char *const hexString);
�磺���ú��� parseHex(��A5��);����165
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
	cout << "������һ��ʮ�����Ƶ�����" << endl;
	cin >> hexString;
	cout << "ת��Ϊʮ����Ϊ��" << parseHex(hexString);

}