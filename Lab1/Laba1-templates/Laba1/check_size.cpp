#include "Libraries.h"

//ÇÀÄÀ×À 1
int check_arr_size1(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return 1;
}




//ÇÀÄÀ×À 2
int check_arr_size2(int n, int m)
{
    if (n >= 2 && m >= 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}