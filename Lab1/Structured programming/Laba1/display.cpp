#include "Libraries.h"

//ЗАДАЧА 1

void display_min_element(int* array, int n)
{
    int* display_array = NULL;//new int[3];
    display_array = min_element(array, n);
    cout << "Значение минимального по модулю элемента массива = " << display_array[0] << endl;
    cout << "Количество минимальных по модулю элементов массива = " << display_array[1] << endl;
    int* display_array2 = NULL;
    display_array2 = index_min(array, n);
    cout << "Координаты минимальных по модулю элементов массива: ";
    for (int i = 0; i < display_array[1]; i++) {
        cout << display_array2[i] << " ";
    }
    cout << endl;
    delete[] display_array;
    delete[] display_array2;
}



void display_summa(int* array, int n)
{
    int* display_array = NULL; // new int[3];
    display_array = summa(array, n);
    if (display_array[0] == 1)
    {
        cout << "В массиве нет отрицательных элементов. Задача не может быть выполнена!" << endl;
    }
    else if (display_array[0] == 2)
    {
        cout << "После первого отрицательного элемента < 2 элементов. Сложение - бинарная операция. Задача не может быть выполнена!" << endl;
    }
    else
    {
        cout << "Сумма всех элементов массива после первого отрицательного = " << display_array[1] << endl;
        cout << "Координаты первого отрицательного элемента массива = " << display_array[2] << endl;
    }
    delete[] display_array;
}

void display_compress(int* array, int n)
{
    int* display_array = NULL;
    double a, b;

    cout << "Введите значения a и b интервала [a,b], где a–левая граница интервала, b–правая граница (a<b): " << endl;
    cin >> a >> b;

    if (b <= a)
    {
        cout << "Значения a и b должны удовлетворять условию a<b. Задача не может быть выполнена!";
    }
    else
    {
        display_array = compress(array, n, a, b);

        cout << "Сжатый массив:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << display_array[i] << " ";
        }
        cout << endl;
        delete[] display_array;
    }
}

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
    {
        delete triangle_array[i];
    }
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

