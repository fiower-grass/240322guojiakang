/* 编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
2     3      5      7    11    13    17    19    23    29
*/
#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)return false;
	if (num == 2)return true;
			for (int j = 2; j < num; j++) {
				if (num % j== 0)return false;
			}
			return true;
	}
int main() {
	int amount=0;
	for (int num = 2; amount <200; num++) {
		if (is_prime(num)) {
			amount++; cout << num<<" ";
			if (amount % 10 == 0 && amount != 0)cout << endl;
		}
		
	}

}