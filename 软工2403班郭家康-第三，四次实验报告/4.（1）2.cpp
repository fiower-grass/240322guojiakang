/*2����������
�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳�򡣴˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
�㷨���������£�
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize �C 1; j++)
	if (list[j] > list[j+1])
	{
	  swap list[j] with list[j+1];
	  changed = true;
	}
} while (changed);
�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�

*/
#include  <iostream>
using namespace std;
void function(double arr[], int size)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0, j; i < size - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				j = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = j;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	double arr[10];
	cout << "������ʮ��˫���ȵ����֣�" << endl;
	for(int x=0;x<10;x++)
	{
		cin >> arr[x];
	}
	function(arr, 10);
	cout << "��������Ϊ��" << endl;
	for(int y=0;y<10;y++)
	{
		cout << arr[y]<<" ";
	}
}