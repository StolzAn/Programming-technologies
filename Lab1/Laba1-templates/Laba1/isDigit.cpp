#include "Libraries.h"

bool isDigit(char line)
{   // ������� ��� ��������, �������� �� ������ ������
    if (line >= '0' && line <= '9')
    {
        return true;
    }
    return false;
}