#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * parameter @s - ends and the function returns the length of the string.
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
