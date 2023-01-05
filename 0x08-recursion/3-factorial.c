#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n parameter - if it lower than 0 it should return -1 or error
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
