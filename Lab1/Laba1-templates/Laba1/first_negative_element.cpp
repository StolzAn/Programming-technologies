#include "Libraries.h"

template <typename T>
int negative_element(T* const array, int n)
{
    int negative = 0;
    while (array[negative] >= 0 && negative < n) 
    { //����� ������� �������������� ��������
        negative++;
    }

    return negative;
}