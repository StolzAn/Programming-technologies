#include "Libraries.h"

template <typename T>
T* summa(T* const arr, int n) 
{
    T summa_after = 0;
    T ok = NULL;
    if (negative_element(arr, n) == n) // Если в массиве нет отрицательных элементов, то index==n
    {
        ok = 1;
    }
    else if (n - (negative_element(arr, n) + 1) >= 2) 
    { //Проверка, есть ли после первого отрицательного массива хотя бы 2 элемента        
        for (int i = negative_element(arr, n) + 1; i < n; i++)
        {
            summa_after += abs(arr[i]);
        }
    }
    else
    {
        ok = 2;
    }
    T* summa_result = new T[3];
    summa_result[0] = ok;
    summa_result[1] = summa_after;
    summa_result[2] = static_cast<T>(negative_element(arr, n));
    return summa_result;
}