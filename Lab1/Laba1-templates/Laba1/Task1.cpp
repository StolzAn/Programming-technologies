 //ЗАДАНИЕ №1
 //В одномерном массиве, состоящем из n целых элементов: 
 //1) найти значение, количество и координаты минимального по модулю элемента массива;
 //2) найти сумму модулей элементов массива, расположенных после первого отрицательного элемента. 
 //Найти положение отрицательного элемента, после которого найдена сумма модулей;
 //3) сжать массив, удалив из него все элементы, величина которых находится в интервале [a,b]
 //(a–левая граница интервала, b–правая граница (a<b)). Освободившееся в конце массива элементы заполнить нулями (описать алгоритм).

#include "Libraries.h"
#include "task_choice.cpp"
#include "Summa_after_negative_element.cpp"
#include "min_element.cpp"
#include "index_min.cpp"
#include "first_negative_element.cpp"
#include "compress.cpp"
#include "template_funk_task1.cpp"

template <typename T>
void task1_main()
{
    int n;

    do
    {
        cout << "Введите размер массива(n): " << endl;
        cin >> n;

        if (check_arr_size1(n))
        {
            T* array = new T[n];
            get_arr_elements1(array, n);
            task_choice(array, n);
            break;
            delete[] array;
        }
        else
        {
            cout << "Вы ввели неверный размер для массива. Значение n должно быть >=1" << endl;
        }
    } while (n < 2 && -2147483648 <= n && 2147483648 >= n);
}

