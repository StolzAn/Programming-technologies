#include "Libraries.h"

int task_three(int max_length)
{
    ifstream file("C:\\FilesC\\Tekst1.txt");  // Открываем файл для чтения(путь к файлу при надобности изменить)
    if (!file.is_open())
    {  // Проверяем открылся ли файл
        cout << "Ошибка открытия файла!" << endl;
        return 0;
    }
    char* line = new char[max_length]; //создаем массив для считывания в него текста из файла

    while (file.getline(line, max_length))
    { // Считываем строки из файла до конца файла
        bool containsTwoDigitNumber = false; //Создаем булеву переменную считывающую присутствие\отсутствие двухзначного числа

        for (int i = 0; line[i] != '\0'; i++)
        {
            if (isDigit(line[i]) == true && isDigit(line[i + 1]) == true)
            {   // Проверяем каждый символ в строке на наличие цифр
                if (line[i] == '0')
                {
                    continue;
                }
                containsTwoDigitNumber = true;
                break;
            }
        }
        if (containsTwoDigitNumber == false) { //Если в строке нет двухзначных чисел, то выводим эту строку
            cout << line << endl;
        }
    }

    delete[] line;   // Освобождаем память от массива char

    file.close();   // Закрываем файл
    return 0;
}