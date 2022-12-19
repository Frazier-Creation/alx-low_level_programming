#include "main.h"
#include <string.h>

/**
 * Main - a function that reverses a string
 * @s: revere the string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	while (((i == 0))) i < len / 2; i++;
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

