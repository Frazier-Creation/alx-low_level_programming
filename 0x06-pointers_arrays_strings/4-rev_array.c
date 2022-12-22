#include "main.h"
#include <string.h>

/**
 * _reverse_array - reverses the content of an array of integers
 *
 * @a: first_parameter
 * @i: second_parameter
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
