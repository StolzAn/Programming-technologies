#include "Libraries.h"

array<int>^ check_size()
{
	int m, n;
	String^ m_line;
	String^ n_line;

	while (true)
	{
		Console::Write(L"m->"); 
		m_line = Console::ReadLine();
		if (!int::TryParse(m_line, m))
		{
			Console::WriteLine("������ ����� �������� ����� m. ����������, ������� ���������� ����� �����.");
		}
		else if(Convert::ToInt32(m_line)<=0)
		{
			Console::WriteLine("������ ����� �������� ����� m. ����������, ������� ����� > 0.");
		}
		else
		{
			break;
		}
	}
	while (true)
	{
		Console::Write(L"n->"); 
		n_line = Console::ReadLine();
		if (!int::TryParse(n_line, n))
		{
			Console::WriteLine("������ ����� �������� �������� n. ����������, ������� ���������� ����� �����.");
		}
		else if (Convert::ToInt32(n_line) <= 0)
		{
			Console::WriteLine("������ ����� �������� ����� n. ����������, ������� ����� > 0.");
		}
		else
		{
			break;
		}
	}

	m = Convert::ToInt32(m_line);
	n = Convert::ToInt32(n_line);

	array<int>^ arr = gcnew array<int>(2);

	arr[0] = m;
	arr[1] = n;

	return arr;

}