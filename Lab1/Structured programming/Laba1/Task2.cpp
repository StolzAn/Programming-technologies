// ������� �2 
// ������������ ������� �������� ��������� ����� ����������� � ���� ������������� ������������� ������� �������� NxM: 
// 1) � ������� ���������� �������������� �������� ������� � ������������ ���� (������� �������� ������� ������ ������); 
// 2) ����� ���� �������������� ����� ���������� � ���������� �����, ������� �������������� ��������� �������, ������ �������� ��������. 
#include "Libraries.h"

void task2_main()
{
    int n, m;

    do
    {   
        cout << "������� ������ �������(2 ����� ����� n � m):";
        cin >> n >> m;

        if (check_arr_size2(n, m) == 1)
        {   
            int** array = new int* [n];
            for (int i = 0; i < n; i++)
            {
                array[i] = new int[m];
            }

            array = get_arr_elements2(array, n, m);

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