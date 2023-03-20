#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 *
 * @char s - Returns a pointer to the first occurrence of the character c
 *
 * Returns: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
