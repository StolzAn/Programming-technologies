// ������� �2 
// ������������ ������� �������� ��������� ����� ����������� � ���� ������������� ������������� ������� �������� NxM: 
// 1) � ������� ���������� �������������� �������� ������� � ������������ ���� (������� �������� ������� ������ ������); 
// 2) ����� ���� �������������� ����� ���������� � ���������� �����, ������� �������������� ��������� �������, ������ �������� ��������. 
#include "Libraries.h"
#include "task_choice2.cpp"
#include "template_func_task2.cpp"

template <typename T>
void task2_main()
{
    int n, m;

    do
    {   
        cout << "������� ������ �������(2 ����� ����� n � m):";
        cin >> n >> m;

        if (check_arr_size2(n, m) == 1)
        {   
            T** array = new T * [n];
            for (int i = 0; i < n; i++)
            {
                array[i] = new T[m];
            }

            get_arr_elements2(array, n, m);

            task_choice2(array, n, m);
     
            for (int i = 0; i < n; i++)
            {
                delete array[i];
            }
            delete[] array;
        }
        else
        {
            cout << "�� ����� �������� ������ �������. �������� n � m ������ ������������� ������� (n>=2 � m>=2)"<<endl;
        }
    } while (n<2 || m<2);
}