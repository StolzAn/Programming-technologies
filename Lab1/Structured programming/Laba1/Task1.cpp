 //������� �1
 //� ���������� �������, ��������� �� n ����� ���������: 
 //1) ����� ��������, ���������� � ���������� ������������ �� ������ �������� �������;
 //2) ����� ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������. 
 //����� ��������� �������������� ��������, ����� �������� ������� ����� �������;
 //3) ����� ������, ������ �� ���� ��� ��������, �������� ������� ��������� � ��������� [a,b]
 //(a������ ������� ���������, b������� ������� (a<b)). �������������� � ����� ������� �������� ��������� ������ (������� ��������).

#include "Libraries.h"

void task1_main()
{
    int n;
    char task_item;

    do
    {   
        cout << "������� ������ �������(n): " << endl;
        cin >> n;

        if (check_arr_size1(n))
        {
            int* array = new int[n];
            array = get_arr_elements1(array, n);

            task_choice(array, n);
            delete[] array;
        }
        else
        {
            cout << "�� ����� �������� ������ ��� �������. �������� n ������ ���� >=1" << endl;
        }
    } while (n < 2 && -2147483648<=n && 2147483648>=n);
}

