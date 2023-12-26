// ЗАДАНИЕ №2 
// Коэффициенты системы линейных уравнений можно представить в виде целочисленной прямоугольной матрице размером NxM: 
// 1) с помощью допустимых преобразований привести систему к треугольному виду (описать алгоритм решения данной задачи); 
// 2) после всех преобразований найти количество и координаты строк, среднее арифметическое элементов которых, меньше заданной величины. 
#include "Libraries.h"
#include "task_choice2.cpp"
#include "template_func_task2.cpp"

template <typename T>
void task2_main()
{
    int n, m;

    do
    {   
        cout << "Введите размер массива(2 целых числа n и m):";
        cin >> n >> m;

        if (check_arr_size2(n, m) == 1)
        {   
            T** array = new T * [n];
            for (int i = 0; i < n; i++)
            {
                array[i] = new T[m];
            }

            get_arr_elements2(array, n, m);

            task_choice2(array, n, m);
     
            for (int i = 0; i < n; i++)
            {
                delete array[i];
            }
            delete[] array;
        }
        else
        {
            cout << "Вы ввели неверный размер массива. Значения n и m должны удовлетворять условию (n>=2 и m>=2)"<<endl;
        }
    } while (n<2 || m<2);
}