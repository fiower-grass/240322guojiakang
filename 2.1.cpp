#include <iostream>
using namespace std;
int main(){
	
	char num;
	cout << "请输入一个字符:" << endl;
	cin >> num;
	if (num >= 'a' && num <= 'z')
	{
		char NUM = num - 32;
		cout <<"结果为"<< NUM << endl;
	}
	else {
		int num1 = static_cast<int>(num)+1; 
		cout << "结果为" << num1 << endl;
	}
	return 0;
}