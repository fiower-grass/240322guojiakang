/*����һ������������Point����˽�б���x��y����һ�����(x,y)����ֵ��
���д����ʵ�����¹��ܣ����ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60,80����
���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60+i,80+j)��
���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤����������*/
#include <iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point() :x(60), y(80) {}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "�޸ĺ������ֵΪ��"<<"("<<x<<","<<y<<")";

	}
};
int main()
{
    point p;
    cout << "��ʼ����ֵΪ��(60,80)" << endl;
    int i = 50; 
    int j = 50; 

    p.setPoint(i, j);
    p.display();

    return 0;

}