#include <stdio.h>
#include "mstring.h"

// print the contecnt of an array
void print_c(char *arr, int s);

int main()
{
	char *name = "Dennis Ritchie";
	int s = len(name);

	print_c(name, s);
	printf(" has a size of %d\n", s);

	printf("char at %d is %c\n", 2, char_at(name, 2));

	printf("Index of %c is %d\n", char_at(name, 2), index_of(name, char_at(name, 2)));

	return 0;
}

void print_c(char *arr, int s)
{
	printf("[");

	for (int i = 0; i < s; i++)
	{
		printf("%c", arr[i]);

		if (i < (s - 1))
		{
			printf(", ");
		}
	}

	printf("]");
}