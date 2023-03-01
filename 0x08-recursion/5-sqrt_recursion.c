#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural square root
 *
 * Return:0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int i;

	for (i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}
