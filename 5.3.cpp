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
	cout << "请输入长方体的长:";
	cin >> length;
	cout << endl;
	cout << "请输入长方体的高:";
	cin >> height;
	cout << endl;
	cout << "请输入长方体的宽:";
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
	cout << "请输入第一个长方体的长宽高:"<<endl;
	C1.input();
	int V1 = C1.cal_volume();
	cout << endl;
	cout << "请输入第二个长方体的长宽高:"<<endl;
	C2.input();
	int V2 = C2.cal_volume();
	cout << endl;
	cout << "请输入第三个长方体的长宽高:"<<endl;
	C3.input();
	int V3 = C3.cal_volume();
	cout << endl;
	cout << "这三个长方体的体积分别为";
	cout << V1 << '\t' << V2 << '\t' << V3;
}