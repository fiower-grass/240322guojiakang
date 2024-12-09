/*5、猴子吃桃：猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，问，第一天猴子共摘多少桃子（用递归实现）。*/

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
	cout << "第一天的桃子数量为：" << function(1) << endl;
}