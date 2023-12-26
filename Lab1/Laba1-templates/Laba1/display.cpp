#include "Libraries.h"

//ЗАДАЧА 1



//ЗАДАЧА 2
void display_triangle_arr(double** arr, int n, int m)
{
    double** triangle_array = NULL;

    triangle_array = triangle_arr(arr, n, m);

    cout << "Треугольная матрица:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << triangle_array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
        delete triangle_array[i];
    delete[] triangle_array;
}

void display_average(double** arr, int n, int  m)
{
    double* display_array = NULL;

    display_array = average(arr, n, m);

    if (display_array[0] == 0)
        cout << "В матрице нет строк, среднее арифметическое элементов которых, меньше заданной величины.";
    else
    {
        cout << "Количество строк, среднее арифметическое элементов которых меньше заданной величины = " << display_array[0] << endl;
        cout << "Такими строками являются:" << endl;
        for (int i = 1; i <= display_array[0]; i++)
        {
            cout << "строка " << display_array[i] << endl;
        }
    }
    delete[] display_array;
}

