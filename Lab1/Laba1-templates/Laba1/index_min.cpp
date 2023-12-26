#include "Libraries.h"

template <typename T>
T* index_min(T* const arr, int n) 
{
    T minimal = arr[0]; // предполагаемый минимальный элемент
    int count = 0; // количество минимальных элементов
    // массив для хранения индексов минимальных элементов
    T* index_minimal = new T[n];
    int index = 0;

    // находим минимальный элемент и подсчитываем количество таких элементов
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
    // заполняем массив с индексами минимальных элементов
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