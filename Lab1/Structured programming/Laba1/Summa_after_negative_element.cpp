#include "Libraries.h"
int* summa(int* const arr, int n) {
    int summa_after = 0;    
    int ok = NULL;
        if (negative_element(arr, n) == n) // Если в массиве нет отрицательных элементов, то index==n
    {
        ok = 1;
    }
    else if (n - (negative_element(arr, n) + 1) >= 2){ //Проверка, есть ли после первого отрицательного массива хотя бы 2 элемента        {
    for (int i = negative_element(arr, n) + 1; i < n; i++)
    {
        summa_after += abs(arr[i]);
    }
        }
        else
        {
            ok = 2;
        }
        int* summa_result = new int[3];
        summa_result[0] = ok;    
        summa_result[1] = summa_after;
        summa_result[2] = negative_element(arr, n);
        return summa_result;
}