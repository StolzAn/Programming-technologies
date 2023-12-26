 //������� �1
 //� ���������� �������, ��������� �� n ����� ���������: 
 //1) ����� ��������, ���������� � ���������� ������������ �� ������ �������� �������;
 //2) ����� ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������. 
 //����� ��������� �������������� ��������, ����� �������� ������� ����� �������;
 //3) ����� ������, ������ �� ���� ��� ��������, �������� ������� ��������� � ��������� [a,b]
 //(a������ ������� ���������, b������� ������� (a<b)). �������������� � ����� ������� �������� ��������� ������ (������� ��������).

#include "Libraries.h"
#include "task_choice.cpp"
#include "Summa_after_negative_element.cpp"
#include "min_element.cpp"
#include "index_min.cpp"
#include "first_negative_element.cpp"
#include "compress.cpp"
#include "template_funk_task1.cpp"

template <typename T>
void task1_main()
{
    int n;

    do
    {
        cout << "������� ������ �������(n): " << endl;
        cin >> n;

        if (check_arr_size1(n))
        {
            T* array = new T[n];
            get_arr_elements1(array, n);
            task_choice(array, n);
            break;
            delete[] array;
        }
        else
        {
            cout << "�� ����� �������� ������ ��� �������. �������� n ������ ���� >=1" << endl;
        }
    } while (n < 2 && -2147483648 <= n && 2147483648 >= n);
}

