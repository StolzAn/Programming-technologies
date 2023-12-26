#include "Libraries.h"

template <typename T>
T* compress(T* arr, int n, double a, double b)
{
    T* array = new T[n];
    for (int i = 0; i < n; i++)
        array[i] = arr[i];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < a || array[i] > b)
        {
            array[i - j] = array[i];//���� ������� �� � ��������� [a,b], �� ������� ��� � ������
        }
        else
        {
            j++;
        }
    }

    for (int i = n - j; i < n; i++)
    {
        array[i] = 0;//�������� ��� ��������, ���������� � �����.
    }

    return array;
}