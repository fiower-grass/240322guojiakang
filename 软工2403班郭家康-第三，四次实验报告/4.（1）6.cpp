/*�ַ�����ÿ����ĸ���ֵĴ�����
��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
void count(const char s[], int counts[])
counts��һ����26��Ԫ�ص��������顣
const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�����
��ĸ���ִ�Сд��������ĸA����ĸa��������a��
*/
#include <iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int j = 0; j < 26; j++)
	{
		counts[j] = 0;
	}
	int size = strlen(s);
	char num;
	int x;
	for (x=0,num='a'; num <= 'z' && x < 26; static_cast<char>(num++), x++)
	{
		for (int i = 0; i < size; i++)
		{
			if (s[i] == static_cast<char>(num) || s[i] == static_cast<char>(num - 32))
				counts[x]++;
		}
	}
}
int main()
{
	const int max = 80;
	int size, counts[26];
	char s[max];
	cout << "��������ַ����ĳ��ȣ�" << endl;
	cin >> size;
	cout << "Enter a string��" << endl;
	for (int a = 0; a < size; a++)
	{
		cin >> s[a];
	}
	count(s, counts);
	for (int b = 0; b < 26; b++)
	{
		if (counts[b] != 0)
		{
			cout << static_cast<char>(b + 97) << ":" << counts[b] << " times";
			cout << endl;
		}
	}
}