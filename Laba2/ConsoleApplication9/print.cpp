#include "Libraries.h"


void print(array<double>^ b, int k,int m, int n)
{
	for (int i = 0;i < k;i++) 
	{
		Console::Write(L"{0} ", b[i]);
	}
	Console::WriteLine();
}