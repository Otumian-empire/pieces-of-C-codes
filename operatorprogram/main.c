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

    // gt, lt, eq, neq
    int x = 12, y = 4;
    printf("%d %s %d", x, (gt(x, y) ? "is greater than" : "is not greater than"), y);
    PNL;

    printf("%d %s %d", x, (lt(x, y) ? "is lesser than" : "is not lesser than"), y);
    PNL;

    printf("%d %s %d", x, (eq(x, y) ? "is equal to" : "is either lesser or greater than"), y);
    PNL;

    printf("%d %s %d", x, (neq(x, y) ? "is not equal to" : "is equal to"), y);
    PNL;
    
    return 0;
}
