#include <iostream>
using namespace std;
class cuboid 
{
private:
	int length, height, width;
public:
	cuboid() : length(0), width(0), height(0) {};
	void input()
	{
	cout << "�����볤����ĳ�:";
	cin >> length;
	cout << endl;
	cout << "�����볤����ĸ�:";
	cin >> height;
	cout << endl;
	cout << "�����볤����Ŀ�:";
	cin >> width;
	}
	int cal_volume()
	{
		int volume = length * height * width;
		return volume;
	}
};
int main()
{
	cuboid C1,C2,C3;
	cout << "�������һ��������ĳ����:"<<endl;
	C1.input();
	int V1 = C1.cal_volume();
	cout << endl;
	cout << "������ڶ���������ĳ����:"<<endl;
	C2.input();
	int V2 = C2.cal_volume();
	cout << endl;
	cout << "�����������������ĳ����:"<<endl;
	C3.input();
	int V3 = C3.cal_volume();
	cout << endl;
	cout << "�����������������ֱ�Ϊ";
	cout << V1 << '\t' << V2 << '\t' << V3;
}