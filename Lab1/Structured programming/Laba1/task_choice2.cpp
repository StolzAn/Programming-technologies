#include "Libraries.h"

void task_choice2(int** array, int n, int m)
{
    char task_item;
    double** triangle_array = new double* [n];
    for (int i = 0; i < n; i++)
    {
        triangle_array[i] = new double[m];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            triangle_array[i][j] = array[i][j];
        }
    }

    for (;;)
    {
        cout << "Какой из пунктов задания вы хотите выполнить?" << endl;
        cout << "1) с помощью допустимых преобразований привести систему к треугольному виду - введите '1'(без кавычек)" << endl;
        cout << "2) Найти количество и координаты строк, среднее арифметическое элементов которых, меньше заданной величины - введите '1'(без кавычек)" << endl;
        cout << "Если вы хотите выполнить задание целиком, введите '3'(без кавычек)" << endl;
        cout << "Для завершения работы программы введите '0'(без кавычек)" << endl;

        cin >> task_item;

        if (task_item >= '0' && task_item <= '3')
            break;
        else
            cout << "Вы ввели неверный номер пункта" << endl;
    }

    switch (task_item)
    {
    case '0':
        cout << "Выполнение задания 2 завершено." << endl;
        break;
    case '1':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_triangle_arr(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    case '2':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_average(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    case '3':
        triangle_array = triangle_arr(triangle_array, n, m);
        display_triangle_arr(triangle_array, n, m);
        display_average(triangle_array, n, m);
        task_choice2(array, n, m);
        break;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        delete triangle_array[i];
    }
    delete[] triangle_array;

}