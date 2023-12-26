#include "Prototypes.h"

void menu()
{
	int m, n;
	double r;

	Console::WriteLine("�������. ������� 11. ");
	Console::WriteLine("������ �������� ������������ ��������� ������ B � D ������������ 6 �� 8, � ������������ ������� Y � Z, ��������� �������������� �� ��������� ������ B � D, ������� ��������� ����� R.");
	Console::WriteLine(" ");
	Console::WriteLine("������� ����������� ������. m - ���-�� �����, n - ���-�� ��������.");

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

	Console::WriteLine("������� ��������� �� ��������� ������ ����� R:");
	print(Y, k, m, n);
	k = form(D, Z, r, m, n);
	print(Z, k, m, n);
}