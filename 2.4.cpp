#include <iostream>
using namespace std;
int main()
{
    double a, b, d;
    char c;
    cout << "������a��b��ֵ�Լ������" << endl;
    cin >> a >> b >> c;

    switch (c) {
    case '+':
        d = a + b;
        break;
    case '-':
        d = a - b;
        break;
    case '*':
        d = a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "������: ��������Ϊ0" << endl;
            return 1;
        }
        d = a / b;
        break;
    case '%':
        if (b == 0) {
            cout << "������: ��������Ϊ0" << endl;
            return 1;
        }
        d = static_cast<int>(a) % static_cast<int>(b);
        break;
    default:
        cout << "û�и������Ŷ" << endl;
        return 1;
    }
    cout << "���ս��Ϊ��" <<d<< endl;
	
	return 0;






}