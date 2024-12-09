/*(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回-1。
在主程序中输入字符串s1与s2，调用函数实现。
函数原型：int indexof(const char *s1,const char *s2);
*/
#include <iostream>
using namespace std;
int indexOf(const char *s1, const char *s2)
{
	int size1 = strlen(s1), size2=strlen(s2);
	int i = 0, j = 0, index;
	do
	{
		if (s1[i] == s2[j])
		{
			i++, j++;
		}
		else j++;
	} while (j < size2 && i < size1);
	if (i = size1)return index = j - i + 1;
	else return -1;
}
int main()
{
	int size1, size2;
	cout << "请输入两个字符串的大小：";
	cin >> size1 >> size2;
	char* s1 = new char[size1];
	char*s2=new char[size2];
	cout << "enter the first string:";
	for (int i = 0; i < size1; i++)
	{
		cin >> s1[i];
	}
	cout << "enter the second string:";
	for (int j = 0; j < size2; j++)
	{
		cin >> s2[j];
	}
	cout << "indexOf(s1,s2) is " << indexOf(s1, s2);
	delete[]s1;
	delete[]s2;
}
