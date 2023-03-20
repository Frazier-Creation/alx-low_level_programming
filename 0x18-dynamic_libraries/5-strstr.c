#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 *
 * @parameter needle - finds the first occurrence of the substring
 *
 * @parameter haystack - terminating null bytes (\0) are not compared
 *
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *h != '\0' && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
