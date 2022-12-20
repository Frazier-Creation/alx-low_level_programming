#include "main.h"
#include <string.h>

/**
 * _prints -  half of a string
 *
 * @char: print the second half of the string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int length = strlen(str);

	for (i = length / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

