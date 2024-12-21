#include <iostream>
#include "student.h"
using namespace std;
void Student::display()        
{
    cout << "num:" << num << endl;
    cout <<"name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int x,const char* arr, char z)
{
    num = x;
    memcpy(name, arr, sizeof(name));
    sex = z;
}
