#include "Libraries.h"

template <typename T>
T* index_min(T* const arr, int n) 
{
    T minimal = arr[0]; // �������������� ����������� �������
    int count = 0; // ���������� ����������� ���������
    // ������ ��� �������� �������� ����������� ���������
    T* index_minimal = new T[n];
    int index = 0;

    // ������� ����������� ������� � ������������ ���������� ����� ���������
    for (int i = 0; i < n; i++) 
    {
        if (abs(arr[i]) < abs(minimal)) 
        {
            minimal = arr[i];
            count = 1;
        }
        else if (abs(arr[i]) == abs(minimal)) 
        {
            count++;
        }
    }
    // ��������� ������ � ��������� ����������� ���������
    for (int i = 0; i < n; i++) 
    {
        if (abs(arr[i]) == abs(minimal)) 
        {
            index_minimal[index] = static_cast<T>(i);
            index++;
        }
    }

    return index_minimal;
}