#include "Libraries.h"

double check_r()
{	
	double r;
	String^ line;
	while (true)
	{
		Console::WriteLine("������� ����� R. ������� ����� ������������ �� ��������� ������ R:");
		Console::Write(L"R->"); line = Console::ReadLine();
		if (!Double::TryParse(line, r))
		{
			Console::WriteLine("������ ����� �������� R. ����������, ������� ���������� �����.");
		}
		else
		{
			r = Convert::ToDouble(line);
			break;
		}
	}
	return r;
}