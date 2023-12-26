#include "Libraries.h"


double** triangle_arr(double** arr, int n, int m)
{
    double** array = new double* [n];
    for (int i = 0; i < n; i++)
    {
        array[i] = new double[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = arr[i][j];
        }
    }

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] != 0)
                ok = false;
        }
    }
    if (ok)
    {
        return array;
    }

    int c = 0;
    int r = 0;
    for (;;)
    {
        if (array[r][c] == 0)
        {
            int ind = r;
            for (int j = r + 1; j < n; j++)
            {
                if (array[j][c] != 0)
                {
                    ind = j;
                    break;
                }
            }

            if (ind != r) {
                for (int j = c; j < m; j++) {
                    double numb = array[r][j];
                    array[r][j] = array[ind][j];
                    array[ind][j] = numb;
                }
            }
        }
        if (array[r][c] != 0) {

            for (int i = r + 1; i < n; i++) {
                if (array[i][c] != 0) {
                    double factor = array[i][c] / array[r][c];

                    array[i][c] = 0;

                    for (int j = c + 1; j < m; j++) {
                        // 		resultMatrix.setElement(i,j, resultMatrix.elementAt(i, j) - factor * resultMatrix.elementAt(r, j));
                        array[i][j] = array[i][j] - factor * array[r][j];
                    }
                }
            }
            r++;
        }
        else {
            c++;
        }

        if (r >= n - 1 || c > m) {
            break;
        }

    }
    return array;
}