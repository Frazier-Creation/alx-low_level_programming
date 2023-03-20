#include "main.h"
#include <stdio.h>

/**
 * _strstr() function finds the first occurrence of the substring
 *
 * @char s : a function that searches a string for any of a set of bytes
 *
 * @char accept: a function that locates a substring
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
