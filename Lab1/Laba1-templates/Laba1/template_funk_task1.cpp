#include "Libraries.h"



//������ 1
template <typename T>
T* get_arr_elements1(T* array, int n)
{
    cout << "������� n ��������� �������: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    return array;
}

template <typename T>
void display_min_element(T* array, int n)
{
    T* display_array = NULL;//new int[3];
    display_array = min_element(array, n);
    cout << "�������� ������������ �� ������ �������� ������� = " << display_array[0] << endl;
    cout << "���������� ����������� �� ������ ��������� ������� = " << display_array[1] << endl;
    T* display_array2 = NULL;
    display_array2 = index_min(array, n);
    cout << "���������� ����������� �� ������ ��������� �������: ";
    for (int i = 0; i < display_array[1]; i++) {
        cout << display_array2[i] << " ";
    }
    cout << endl;
    delete[] display_array;
    delete[] display_array2;
}

template <typename T>
void display_summa(T* array, int n)
{
    T* display_array = NULL; // new int[3];
    display_array = summa(array, n);
    if (display_array[0] == 1)
    {
        cout << "� ������� ��� ������������� ���������. ������ �� ����� ���� ���������!" << endl;
    }
    else if (display_array[0] == 2)
    {
        cout << "����� ������� �������������� �������� < 2 ���������. �������� - �������� ��������. ������ �� ����� ���� ���������!" << endl;
    }
    else
    {
        cout << "����� ���� ��������� ������� ����� ������� �������������� = " << display_array[1] << endl;
        cout << "���������� ������� �������������� �������� ������� = " << display_array[2] << endl;
    }
    delete[] display_array;
}

template <typename T>
void display_compress(T* array, int n)
{
    T* display_array = NULL;
    double a, b;

    cout << "������� �������� a � b ��������� [a,b], ��� a������ ������� ���������, b������� ������� (a<b): " << endl;
    cin >> a >> b;

    if (b <= a)
    {
        cout << "�������� a � b ������ ������������� ������� a<b. ������ �� ����� ���� ���������!";
    }
    else
    {
        display_array = compress(array, n, a, b);

        cout << "������ ������:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << display_array[i] << " ";
        }
        cout << endl;
        delete[] display_array;
    }
}