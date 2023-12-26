#include "Libraries.h"

int* min_element(int* const arr, int n)
{
    int minimal = arr[0];
    int cnt_minimal = 0;
    int* minimum_result = new int[3];

    for (int i = 0; i < n; i++)
    {
        if (abs(arr[i]) == minimal) // Количество одинаковых минимальных по модулю элементов
        {
            cnt_minimal += 1;
            
        }
        else if (abs(arr[i]) < minimal) // Поиск минимального
        {
            cnt_minimal = 1;
            minimal = abs(arr[i]);
        }
    }
    
    minimum_result[0] = minimal;
    minimum_result[1] = cnt_minimal;

    return minimum_result;
}