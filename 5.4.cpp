/*����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���������һ������max��
��ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ�š�*/
#include <iostream>
using namespace std;
class Student
{
private:
    int num;  
    double score; 
public:
    void input_num()
    {
        cout << "������ѧ����ѧ�ţ�";
        cin >> num;
    }
    void input_score()
    {
        cout << "������ѧ���ĳɼ���";
        cin >> score;
    }
    double return_score()
    {
        return score;
    }
    double return_num()
    {
        return num;
    }
};
void max(Student* students)
{
    Student* max_score = &students[0];
    for (int i = 1; i < 5; ++i)
    {
        if (students[i].return_score() > max_score->return_score())
        {
            max_score = &students[i];
        }
    }
    cout << "��߳ɼ���ѧ��ѧ����: " << (*max_score).return_num()<< '\t'<<"�ɼ���: " << (*max_score).return_score() << endl;
}

int main() 
{
    Student students[5];
    for (int i = 0; i < 5; ++i) 
    {
        cout << "������� " << i + 1 << " ��ѧ������Ϣ��" << endl;
        students[i].input_num();
        students[i].input_score();
    }
    max(students);
}