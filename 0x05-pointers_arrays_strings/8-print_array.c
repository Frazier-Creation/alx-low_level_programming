#include "main.h"
#include <stdio.h>

/**
 * prints - elements of an array of integers
 *
 * @a: array of integer in order
 * @n: will be the return value
 *
 * Return: n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
