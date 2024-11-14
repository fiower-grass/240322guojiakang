#include <iostream>
using namespace std;
int main()
{
    double a, b, d;
    char c;
    cout << "请输入a和b的值以及运算符" << endl;
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
            cout << "出错了: 除数不能为0" << endl;
            return 1;
        }
        d = a / b;
        break;
    case '%':
        if (b == 0) {
            cout << "出错了: 除数不能为0" << endl;
            return 1;
        }
        d = static_cast<int>(a) % static_cast<int>(b);
        break;
    default:
        cout << "没有该运算符哦" << endl;
        return 1;
    }
    cout << "最终结果为：" <<d<< endl;
	
	return 0;






}