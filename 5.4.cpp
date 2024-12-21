/*建立一个对象数组，内放5个学生的（学号，成绩），设立一个函数max，
用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号。*/
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
        cout << "请输入学生的学号：";
        cin >> num;
    }
    void input_score()
    {
        cout << "请输入学生的成绩：";
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
    cout << "最高成绩的学生学号是: " << (*max_score).return_num()<< '\t'<<"成绩是: " << (*max_score).return_score() << endl;
}

int main() 
{
    Student students[5];
    for (int i = 0; i < 5; ++i) 
    {
        cout << "请输入第 " << i + 1 << " 个学生的信息：" << endl;
        students[i].input_num();
        students[i].input_score();
    }
    max(students);
}