#include "Libraries.h"

template <typename T>
void task_choice(T* array, int n)
{
    char task_item;
    for (;;)
    {
        cout << endl << endl << "����� �� ������� ������� �� ������ ���������?" << endl;
        cout << "1) ����� ��������, ���������� � ���������� ������������ �� ������ �������� ������� - ������� '1'(��� �������)" << endl;
        cout << "2) ����� ����� ������� ��������� �������, ������������� ����� ������� �������������� ��������.\n   ����� ��������� �������������� ��������, ����� �������� ������� ����� �������  - ������� '2'(��� �������)" << endl;
        cout << "3) ����� ������, ������ �� ���� ��� ��������, �������� ������� ��������� � ��������� [a,b]\n   (a������ ������� ���������, b������� ������� (a<b)). �������������� � ����� ������� �������� ��������� ������  - ������� '3'(��� �������)" << endl;
        cout << "���� �� ������ ��������� ������� �������, ������� '4'(��� �������)" << endl;
        cout << "��� ���������� ������ ��������� ������� '0'(��� �������)" << endl;

        cin >> task_item;

        if (task_item >= '0' && task_item <= '4')
            break;
        else
            cout << "�� ����� �������� ����� ������" << endl;
    }

    switch (task_item)
    {
    case '0':
        cout << "���������� ������� 1 ���������." << endl;
        break;
    case '1':
        display_min_element(array, n);
        task_choice(array, n);
        break;
    case '2':
        display_summa(array, n);
        task_choice(array, n);
        break;
    case '3':
        display_compress(array, n);
        task_choice(array, n);
        break;
    case '4':
        display_min_element(array, n);
        display_summa(array, n);
        display_compress(array, n);
        task_choice(array, n);
        break;
    }
    cout << endl;
    
}