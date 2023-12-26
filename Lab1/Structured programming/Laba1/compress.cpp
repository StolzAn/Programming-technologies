#include "Libraries.h"

int* compress(int* arr, int n, int a, int b)
{
    int* array = new int[n];
    for (int i = 0; i < n; i++)
        array[i] = arr[i];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < a || array[i] > b)
        {
            array[i - j] = array[i];//Если элемент не в интервале [a,b], то двигаем его в начало
        }
        else
        {
            j++;
        }
    }

    for (int i = n - j; i < n; i++)
    {
        array[i] = 0;//Обнуляем все элементы, оставшиеся в конце.
    }

    return array;
}