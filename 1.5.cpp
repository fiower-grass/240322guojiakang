#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> F;
	if (32 <= F <= 212) {
		C = (F - 32) / 18;
		cout << "�����¶�Ϊ��" <<fixed<< setprecision(2)<< C<< endl;
	}
	else {
		cout << "����������¶Ȳ�����" << endl;
	}
	return 0;
}