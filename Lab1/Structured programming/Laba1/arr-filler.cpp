#include "Libraries.h"

//������ 1
int check_arr_size1(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return 1;
}

int* get_arr_elements1(int* array, int n)
{
    cout << "������� n ��������� �������: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    return array;
}

//������ 2
int check_arr_size2(int n, int m)
{
    if (n >= 2 && m >= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int** get_arr_elements2(int** array, int n, int m)
{
    cout << "������� �������� ������� ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    return array;
}