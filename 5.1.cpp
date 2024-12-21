#include<iostream>
using namespace std;
class Time             
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cout << "input hour:";
		cin >> hour;
		cout << endl;
		cout << "input minute:";
		cin >> minute;
		cout << endl;
		cout << "input second:";
		cin >> sec;
	}
	void output()
{
	cout <<hour << ":" << minute<< ":" << sec << endl;
}
};
int main()
{
	Time tl;          
	tl.input();
	tl.output();
	return 0;
}
