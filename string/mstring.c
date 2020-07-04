#include "mstring.h"

int len(char *str)
{
    int s = 0;
    while (*str != '\0')
    {
        s++;
        str++;
    }

    return s;
}

char char_at(char *str, int a)
{
    char c = '\0';

    if (a < len(str))
    {
        c = str[a];
    }

    return c;
}

int index_of(char *str, char a)
{
    int i = -1;

    for (int n = 0; n < len(str); n++)
    {
        if (*(str + n) == a)
        {
            i = n;
            break;
        }
    }

    return i;
}

