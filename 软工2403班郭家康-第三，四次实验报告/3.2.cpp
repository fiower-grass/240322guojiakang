/* ��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num), ���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
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