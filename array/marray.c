#include "marray.h"

int array_hasi(int s, int arr[], int a)
{
    int index = -1;

    for (int i = 0; i < s; i++)
    {
        if (arr[i] == a)
        {
            index = i;
            break;
        }
    }

    return index;
}

int array_hasc(int s, char *arr, char a)
{
    int index = -1;

    for (int i = 0; i < s; i++)
    {
        if (arr[i] == a)
        {
            index = i;
            break;
        }
    }

    return index;
}

int array_sum(int s, int *arr)
{
    int total = 0;

    for (int i = 0; i < s; i++)
    {
        total += arr[i];
    }

    return total;
}

int *array_sumr(int s, int *arra, int *arrb)
{   
    for (int i = 0; i < s; i++)
    {
        arra[i] = arra[i] + arrb[i];
    }

    return arra;
}

int *array_mul(int s, int *arr, int factor)
{
    for (int i = 0; i < s; i++)
    {
        arr[i] = arr[i] * factor;
    }

    return arr;
}

int *array_mula(int s, int *arra, int *arrb)
{
    for (int i = 0; i < s; i++)
    {
        arra[i] = arra[i] * arrb[i];
    }
    
    return arra;
}
