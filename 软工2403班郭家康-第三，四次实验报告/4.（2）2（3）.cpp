/*(3) �������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬
��̬���Թ۲�ָ�뼰ָ��ָ������ݣ����һ��������������С��������
����������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete��*/
#include <iostream>
using namespace std;
void sortfunction(int* arr, int size) 
    {
        for (int i = 0; i < size - 1; ++i)
        {
            for (int j = 0; j < size - i - 1; ++j) 
            {
                if (arr[j] > arr[j + 1]) 
                {
                    int num = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] =num;
                }
            }
        }
    }
    void printfunction(int* arr, int size)
    {
        for (int i = 0; i < size; ++i) 
        {
            cout << *(arr + i) << " ";
        }
        cout << endl;
    }
#include <iostream>
    using namespace std;
    int main() 
    {
        int size;
        cout << "�����������Ԫ�ظ���: ";
        cin >> size;
        int* arr = new int[size];
        cout << "�����������е�Ԫ��: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
        sortfunction(arr, size);
        cout << "����������: ";
        printfunction(arr, size);
        delete[] arr;
    }
    