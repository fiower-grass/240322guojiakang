/*5�����ӳ��ң����ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ��ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���*/

int function(int x) {
	if (x == 10) return 1;
	else {
		int amount = function(x + 1);
		return (amount+1)*2;
	}
}
#include <iostream>
using namespace std;
int main() {
	cout << "��һ�����������Ϊ��" << function(1) << endl;
}