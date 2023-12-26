#include "Libraries.h"



//ЗАДАЧА 1
template <typename T>
T* get_arr_elements1(T* array, int n)
{
    cout << "Введите n элементов массива: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    return array;
}

template <typename T>
void display_min_element(T* array, int n)
{
    T* display_array = NULL;//new int[3];
    display_array = min_element(array, n);
    cout << "Значение минимального по модулю элемента массива = " << display_array[0] << endl;
    cout << "Количество минимальных по модулю элементов массива = " << display_array[1] << endl;
    T* display_array2 = NULL;
    display_array2 = index_min(array, n);
    cout << "Координаты минимальных по модулю элементов массива: ";
    for (int i = 0; i < display_array[1]; i++) {
        cout << display_array2[i] << " ";
    }
    cout << endl;
    delete[] display_array;
    delete[] display_array2;
}

template <typename T>
void display_summa(T* array, int n)
{
    T* display_array = NULL; // new int[3];
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

template <typename T>
void display_compress(T* array, int n)
{
    T* display_array = NULL;
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