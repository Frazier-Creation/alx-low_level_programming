#include "main.h"
#include <stdio.h>

/**
 * function_memset - a function that fills memory with a constant byte
 *
 * @parameter s: bytes of the memory area pointed
 * @parameter b: with the constant byte b
 * Return : s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
