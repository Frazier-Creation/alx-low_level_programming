#include "main.h"
#include <stdio.h>

/**
 * function _memcpy - a function that copies memory area
 *
 * @parameter dest : memory area
 * @parameter src : function copies n bytes from memory area
 *
 * Returns : dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
