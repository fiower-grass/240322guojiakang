#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main() {
	string line;
	int a=0, b=0, c=0, d=0;
	cout << "请输入一串字符：" << endl;
	getline(cin, line);
	for (char L : line) {
		if (isalpha(L)) {
			a++;
		}
		else if (isdigit(L)) {
			b++;
		}
		else if (isspace(L)) {
			c++;
		}
		else if (L == '/n') {
			break;
		}
		else {
			d++;
		}

	}
	cout << "字母的个数：" <<a<< endl;
	cout << "数字的个数：" <<b<< endl;
	cout << "空格的个数：" <<c<< endl;
	cout << "其它字符的个数；" <<d<< endl;
	return 0;
}