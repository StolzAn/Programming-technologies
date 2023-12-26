#include "Libraries.h"



double* average(double** arr, int n, int m)
{
    double** array = NULL;
    int average_cnt = 0;
    double average_value;
    double comparison_value;
    double* return_array = NULL;

    cout << "Введите значение для сравнения: ";
    cin >> comparison_value;

    array = arr;

    for (int i = 0; i < n; i++)
    {
        average_value = 0;

        for (int j = 0; j < m; j++)
        {
            average_value += array[i][j];
        }

        if (average_value < comparison_value)
            average_cnt += 1;
    }

    return_array = new double[average_cnt + 1];
    return_array[0] = average_cnt;

    if (average_cnt > 0)
    {
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            average_value = 0;
            for (int j = 0; j < m; j++)
            {
                average_value += array[i][j];
            }
            if (average_value < comparison_value)
            {
                k++;
                return_array[k] = i;
            }
        }
    }
    
    return return_array;
}