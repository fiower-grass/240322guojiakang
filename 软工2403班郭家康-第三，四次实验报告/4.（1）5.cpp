/*�����Ӵ���
��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
int indexOf(const char s1[], const char s2[])
��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ��������ǳ��������������
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
	cout << "�����������ַ����Ĵ�С��";
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