/*合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1 + size2次比较实现函数。
编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。
下面是一个运行样例。
注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。*/
#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	list3[0] = size1 + size2;
	int x = 1, y = 1, z = 1;
	for (z; z <= list3[0] && x <= size1 && y <= size2; z++)
	{
		if (list1[x] < list2[y])
		{
			list3[z] = list1[x];
			x++;
		}
		else
		{
			list3[z] = list2[y];
			y++;
		}
	}
	if (x <= size1)
	{
		for (x, z; x <= size1; x++, z++)list3[z] = list1[x];
	}
	else if (y <= size2)
	{
		for (y, z; y <= size2; y++, z++)list3[z] = list2[y];
	}
}
int main()
{
	const int max = 80;
	int arr1[max], arr2[max], arr3[max];
	cout << "请输入两个数组的大小：" << endl;
	int size1, size2;
	cin >> size1 >> size2;
	if (size1 + size2 >= 80)
	{
		cout << "超过了数组的大小" << endl;
		return 1;
	}
	cout << "Enter list1：";
	for (int i = 0; i <= size1; i++)
	{
		cin >> arr1[i];
	}
	cout << "Enter list2：";
	for (int j = 0; j <= size2; j++)
	{
		cin >> arr2[j];
	}
	arr1[0] = size1, arr2[0] = size2;
	merge(arr1, size1, arr2, size2, arr3);
	cout << "The merged list is ";
	for (int a = 1; a <= arr3[0]; a++)
	{
		cout << arr3[a] << " ";
	}
}