#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value raised to the power
 *
 * @x - is the value
 * @y - is lower than 0, the function should return -1
 *
 * Returns : 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

