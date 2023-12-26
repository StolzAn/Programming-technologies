#include "Libraries.h"

//������ 1



//������ 2
void display_triangle_arr(double** arr, int n, int m)
{
    double** triangle_array = NULL;

    triangle_array = triangle_arr(arr, n, m);

    cout << "����������� �������:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << triangle_array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete triangle_array[i];
    delete[] triangle_array;
}

void display_average(double** arr, int n, int  m)
{
    double* display_array = NULL;

    display_array = average(arr, n, m);

    if (display_array[0] == 0)
        cout << "� ������� ��� �����, ������� �������������� ��������� �������, ������ �������� ��������.";
    else
    {
        cout << "���������� �����, ������� �������������� ��������� ������� ������ �������� �������� = " << display_array[0] << endl;
        cout << "������ �������� ��������:" << endl;
        for (int i = 1; i <= display_array[0]; i++)
        {
            cout << "������ " << display_array[i] << endl;
        }
    }
    delete[] display_array;
}

