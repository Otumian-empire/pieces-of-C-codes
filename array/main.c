#include <stdio.h>
#include "marray.h"
#define PNL printf("\n")

// print the contecnt of an array
void print_a(int s, int *arr);

int main()
{
	int s = 5;

	int  odd[] = {1, 3, 5, 7, 9};
	int  even[] = {2, 4, 6, 8, 10};
	char vowels[] = {'a', 'e', 'i', 'o', 'u'};
	
	puts("These are the arrays that would be used ...");
	
	printf("even: ");
	print_a(s, even); PNL;
		
	printf("odd: ");
	print_a(s, odd); PNL;
	
	
	int i = array_hasi(s, even, 1);
	int j = array_hasc(s, vowels, 'u');

	// array_hasi
	if (i > -1)
	{
		printf("%d in array", even[i]); 
	}
	else
	{
		printf("element not found");
	} PNL;

	// array_hasc
	if (j > -1)
	{
		printf("%c in array", vowels[j]);
	}
	else
	{
		printf("element not found");
	} PNL;

	// array_sum
	printf("sum of the array, ");
	print_a(s, even);
	printf(" is %d", array_sum(s, even)); PNL;

	// array_sumr
	print_a(s, array_sumr(s, even, odd)); PNL;

	// array_mul
	print_a(s, array_mul(s, odd, s)); PNL;

	// array_mula
	print_a(s, array_mula(s, even, odd)); PNL;

    puts("arrays used initially, modification");
    
	print_a(s,even); PNL;
	print_a(s,odd); PNL;
	
	return 0;
}

void print_a(int s, int *arr)
{
	printf("[");

	for (int i = 0; i < s; i++)
	{
		printf("%d", arr[i]);

		if (i < (s - 1))
		{
			printf(", ");
		}
	}

	printf("]");
}

