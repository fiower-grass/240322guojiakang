#include <iostream>
using namespace std;
int main(){
	
	char num;
	cout << "������һ���ַ�:" << endl;
	cin >> num;
	if (num >= 'a' && num <= 'z')
	{
		char NUM = num - 32;
		cout <<"���Ϊ"<< NUM << endl;
	}
	else {
		int num1 = static_cast<int>(num)+1; 
		cout << "���Ϊ" << num1 << endl;
	}
	return 0;
}