#include <stdio.h>
#include "main.h"

/**
 * print_line - prints straight line
 * @n: parameter
 * Return: nothing returns
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');

	}
	_putchar('\n');
}
