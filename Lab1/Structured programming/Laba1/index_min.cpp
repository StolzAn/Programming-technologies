#include "Libraries.h"

int* index_min(int* const arr, int n) {
    int minimal = arr[0]; // �������������� ����������� �������
    int count = 0; // ���������� ����������� ���������
    // ������ ��� �������� �������� ����������� ���������
    int* index_minimal = new int[n];
    int index = 0;

    // ������� ����������� ������� � ������������ ���������� ����� ���������
    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) < abs(minimal)) {
            minimal = arr[i];
            count = 1;
        }
        else if (abs(arr[i]) == abs(minimal)) {
            count++;
        }
    }
    // ��������� ������ � ��������� ����������� ���������
    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) == abs(minimal)) {
            index_minimal[index] = i;
            index++;
        }
    }

    return index_minimal;
}