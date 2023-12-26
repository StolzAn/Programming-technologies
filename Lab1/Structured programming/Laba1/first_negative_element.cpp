#include "Libraries.h"

int negative_element(int* const arr, int n)
{
    int negative = 0;
    while (arr[negative] >= 0 && negative < n) { //Поиск первого отрицательного элемента
        negative++;
    }

    return negative;
}