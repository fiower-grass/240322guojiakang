#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main() {
	string line;
	int a=0, b=0, c=0, d=0;
	cout << "������һ���ַ���" << endl;
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
	cout << "��ĸ�ĸ�����" <<a<< endl;
	cout << "���ֵĸ�����" <<b<< endl;
	cout << "�ո�ĸ�����" <<c<< endl;
	cout << "�����ַ��ĸ�����" <<d<< endl;
	return 0;
}