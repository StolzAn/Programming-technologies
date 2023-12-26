#include "Libraries.h"

template <typename T>
void task_choice(T* array, int n)
{
    char task_item;
    for (;;)
    {
        cout << endl << endl << "Какой из пунктов задания вы хотите выполнить?" << endl;
        cout << "1) найти значение, количество и координаты минимального по модулю элемента массива - введите '1'(без кавычек)" << endl;
        cout << "2) найти сумму модулей элементов массива, расположенных после первого отрицательного элемента.\n   Найти положение отрицательного элемента, после которого найдена сумма модулей  - введите '2'(без кавычек)" << endl;
        cout << "3) сжать массив, удалив из него все элементы, величина которых находится в интервале [a,b]\n   (a–левая граница интервала, b–правая граница (a<b)). Освободившееся в конце массива элементы заполнить нулями  - введите '3'(без кавычек)" << endl;
        cout << "Если вы хотите выполнить задание целиком, введите '4'(без кавычек)" << endl;
        cout << "Для завершения работы программы введите '0'(без кавычек)" << endl;

        cin >> task_item;

        if (task_item >= '0' && task_item <= '4')
            break;
        else
            cout << "Вы ввели неверный номер пункта" << endl;
    }

    switch (task_item)
    {
    case '0':
        cout << "Выполнение задания 1 завершено." << endl;
        break;
    case '1':
        display_min_element(array, n);
        task_choice(array, n);
        break;
    case '2':
        display_summa(array, n);
        task_choice(array, n);
        break;
    case '3':
        display_compress(array, n);
        task_choice(array, n);
        break;
    case '4':
        display_min_element(array, n);
        display_summa(array, n);
        display_compress(array, n);
        task_choice(array, n);
        break;
    }
    cout << endl;
    
}