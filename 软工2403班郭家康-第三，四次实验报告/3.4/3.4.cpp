/*4��������Ϊmytriangle.h��ͷ�ļ���������
bool is_valid(double side1,double side2,double side3)
double_area(double side1,double side2, double side3)
���=sqrt(s(s-side1)(s-side2)(s-side3))
����s=(side1+side2+side3)/2
д���Գ��򣺶�ȡ���������߳���������Ϸ�������������������������Ϣ��
�����Գ���Ϊ��ģ�飬��main( )�������ڵ�CPP�ļ���ͷ�ļ�mytriangle.hֻ�к�����������������д����һCPP�ļ�mytriangle.cpp��
*/
#include <iostream>
#include "mytriangle.h"
using namespace std;
int main() {
	double a,b,c;
	cout<< "�����������ε����߳���" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		double area;
		area=double_area(a, b, c);
		cout << "�������ε����Ϊ��" << area<< endl;
	}
	else {
		cout << "�޷�����������" << endl;
	}
}