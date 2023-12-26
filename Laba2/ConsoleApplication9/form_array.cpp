#include "Libraries.h"

int form(array<double, 2>^ a, array<double>^ b, int r, int m, int n)
{
	int k = 0;
	for (int i = 0;i < m;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[i, j] < r)
			{
				b[k] = a[i, j];
				k++;
			}
		}
	}

	return k;
}