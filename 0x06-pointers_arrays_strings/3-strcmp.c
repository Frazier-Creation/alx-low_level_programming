#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first_parameter
 * @s2: second_parameter
 *
 * Return: s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
