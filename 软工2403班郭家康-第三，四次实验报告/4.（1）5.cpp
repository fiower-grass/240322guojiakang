/*检验子串：
编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
int indexOf(const char s1[], const char s2[])
编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串。下面是程序的运行样例：
*/
#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int size1=sizeof(s1)/sizeof(s1[0]),size2 = sizeof(s2) / sizeof(s2[0]);
	int i = 0, j = 0,index;
	do
	{
		if (s1[i] == s2[j])
		{
			i++, j++;
		}
		else j++;
	} while (j < size2&&i<size1);
	if (i = size1 - 1)return index=j-i+1;
	else return -1;
}
int main()
{
	int size1, size2;
	cout << "请输入两个字符串的大小：";
	cin >> size1 >> size2;
	const int max = 80;
	char s1[max], s2[max];
	cout << "enter the first string:";
	for (int i = 0; i < size1 - 1; i++)
	{
		cin >> s1[i];
	}
	cout << "enter the second string:";
	for (int j= 0; j < size2 - 1; j++)
	{
		cin >> s1[j];
	}
	cout << "indexOf(s1,s2) is " << indexOf(s1, s2);
}