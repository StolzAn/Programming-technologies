#include "Libraries.h"

void task_choice2(int** array, int n, int m)
{
    char task_item;
    double** triangle_array = new double* [n];
    for (int i = 0; i < n; i++)
    {
        triangle_array[i] = new double[m];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            triangle_array[i][j] = array[i][j];
        }
    }

    for (;;)
    {
        cout << "����� �� ������� ������� �� ������ ���������?" << endl;
        cout << "1) � ������� ���������� �������������� �������� ������� � ������������ ���� - ������� '1'(��� �������)" << endl;
        cout << "2) ����� ���������� � ���������� �����, ������� �������������� ��������� �������, ������ �������� �������� - ������� '1'(��� �������)" << endl;
        cout << "���� �� ������ ��������� ������� �������, ������� '3'(��� �������)" << endl;
        cout << "��� ���������� ������ ��������� ������� '0'(��� �������)" << endl;

        cin >> task_item;

        if (task_item >= '0' && task_item <= '3')
            break;
        else
            cout << "�� ����� �������� ����� ������" << endl;
    }

    switch (task_item)
    {
    case '0':
        cout << "���������� ������� 2 ���������." << endl;
        break;
    case '1':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_triangle_arr(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    case '2':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_average(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    case '3':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_triangle_arr(triangle_array, n, m);
        display_average(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        delete triangle_array[i];
    }
    delete[] triangle_array;

}