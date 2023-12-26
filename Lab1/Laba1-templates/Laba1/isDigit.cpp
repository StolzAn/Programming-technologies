#include "Libraries.h"

bool isDigit(char line)
{   // Ôóíêöèÿ äëÿ ïğîâåğêè, ÿâëÿåòñÿ ëè ñèìâîë öèôğîé
    if (line >= '0' && line <= '9')
    {
        return true;
    }
    return false;
}