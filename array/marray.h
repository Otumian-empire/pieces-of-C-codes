#ifndef MARRAY_H
#define MARRAY_H

// array operations

// return the index of an element
// if the element exist in the array,
// else, -1
int array_hasi(int *arr, int s, int a);
int array_hasc(char *arr, int s, char a);

// return the sum of elements in an array
int array_sum(int *arr, int s);

// give two arrays, return an array of the sum
// of corresponding elements
// given the current limitations, let the size of the array
// be 5
int *array_sumr(int *arra, int *arrb);

// return array by multiplying the content of the given
// array by the factor
int *array_mul(int *arr, int factor);

// give two arrays, return an array of the product of
// of corresponding elements
int *array_mula(int * arra, int * arrb);

#endif
