#include "marray.h"

int array_hasi(int *arr, int s, int a)
{
    int index = -1;

    for (int i = 0; i < s; i++)
    {
        if (*(arr + i) == a)
        {
            index = i;
            break;
        }
    }

    return index;
}

int array_hasc(char *arr, int s, char a)
{
    int index = -1;

    for (int i = 0; i < s; i++)
    {
        if (*(arr + i) == a)
        {
            index = i;
            break;
        }
    }

    return index;
}

int array_sum(int *arr, int s)
{
    int total = 0;

    for (int i = 0; i < s; i++)
    {
        total += arr[i];
    }

    return total;
}

int *array_sumr(int *arra, int *arrb)
{
    static int arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = arra[i] + arrb[i];
    }

    return arr;
}

int *array_mul(int *arr, int factor)
{
    static int rarr[5];

    for (int i = 0; i < 5; i++)
    {
        rarr[i] = arr[i] * factor;
    }

    return rarr;
}

int *array_mula(int *arra, int *arrb)
{
    static int rarr[5];

    for (int i = 0; i < 5; i++)
    {
        rarr[i] = arra[i] * arrb[i];
    }

    return rarr;
}
