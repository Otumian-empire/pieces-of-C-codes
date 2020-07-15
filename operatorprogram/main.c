#include <stdio.h>
#include "operatorprogram.h"

#include "../helper/helper.h"

int main()
{
    int a = 1, b[] = {2, 3, 4, 5, 6}, n = 5;
    int k = 6, bk[] = {2, 3, 4, 5, 6}, nk = 5;

    print_a(n, b);
    if (!in(a, b, n))
    {
        printf(" does not contain %d", a);
    }
    else
    {
        printf(" contains %d", a);
    }
    PNL;

    print_a(nk, bk);
    if (!in(k, bk, nk))
    {
        printf(" does not contain %d", k);
    }
    else
    {
        printf(" contains %d", k);
    }
    PNL;

    return 0;
}
