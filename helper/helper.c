#include "helper.h"

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

