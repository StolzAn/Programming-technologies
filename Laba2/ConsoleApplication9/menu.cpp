#include "Prototypes.h"

void menu()
{
	int m, n;
	double r;

	Console::WriteLine("ЗАДАНИЕ. Вариант 11. ");
	Console::WriteLine("Задать значения вещественным элементам матриц B и D размерностью 6 на 8, и сформировать массивы Y и Z, состоящие соответственно из элементов матриц B и D, меньших заданного числа R.");
	Console::WriteLine(" ");
	Console::WriteLine("Введите размерность матриц. m - кол-во строк, n - кол-во столбцов.");

	array<int>^ size_arr = check_size();
	m = size_arr[0];
	n = size_arr[1];

	array<double, 2>^ B = gcnew array<double, 2>(m, n);
	array<double, 2>^ D = gcnew array<double, 2>(m, n);
	array<double>^ Y = gcnew array<double>(m * n);
	array<double>^ Z = gcnew array<double>(m * n);

	input(B, m, n);
	input(D, m, n);
	r = check_r();

	int k = form(B, Y, r, m, n);

	Console::WriteLine("Массивы состоящие из элементов меньше числа R:");
	print(Y, k, m, n);
	k = form(D, Z, r, m, n);
	print(Z, k, m, n);
}