#include "Libraries.h"

double check_r()
{	
	double r;
	String^ line;
	while (true)
	{
		Console::WriteLine("Введите число R. Массивы будут сформированы из элементов меньше R:");
		Console::Write(L"R->"); line = Console::ReadLine();
		if (!Double::TryParse(line, r))
		{
			Console::WriteLine("Ошибка ввода значения R. Пожалуйста, введите корректное число.");
		}
		else
		{
			r = Convert::ToDouble(line);
			break;
		}
	}
	return r;
}