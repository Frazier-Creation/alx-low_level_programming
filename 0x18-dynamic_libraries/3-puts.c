#include "main.h"
#include  <stdio.h>

/**
 * Main - function that prints a string
 *
 * Return: followed by a new line, to stdout
 */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
