#ifndef MARRAY_H
#define MARRAY_H

// array operations
// by design conversion, always pass the array size first

// return the index of an element
// if the element exists in the array,
// else, -1
int array_hasi(int s, int *arr , int a);
int array_hasc(int s, char *arr, char a);

// return the sum of the elements in the array
int array_sum(int s, int *arr);

// give two arrays, return an array of the sum
// of corresponding elements
// the first array is modified
int *array_sumr(int s, int *arra, int *arrb);

// return array by multiplying the content of the given
// array by the factor
// the first array is modified
int *array_mul(int s, int *arr, int factor);

// give two arrays, return an array of the product of
// of corresponding elements
// the first array is modified
int *array_mula(int s, int * arra, int * arrb);

#endif
