#include "Libraries.h"

template <typename T>
T** get_arr_elements2(T** array, int n, int m)
{
    cout << "¬ведите элементы массива ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }
    return array;
}