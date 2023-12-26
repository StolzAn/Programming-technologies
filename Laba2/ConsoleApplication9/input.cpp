#include "Libraries.h"

void input(array<double, 2>^ A,int m,int n) 
{
	Console::WriteLine(L"Введите элементы матрицы:");
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			while (true)
			{	
				String^ line;
				line = Console::ReadLine();
				if (!Double::TryParse(line, A[i, j]))
				{
					Console::WriteLine("Ошибка ввода значения элемента матрицы. Пожалуйста, введите корректное число.");
				}
				else
				{
					A[i, j] = Convert::ToDouble(line);
					break;
				}
			}
		}
	}
	Console::WriteLine(L"\nВот ваша матрица:");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			Console::Write(L"{0} ", A[i, j]);
		}
		Console::WriteLine();
	}
}