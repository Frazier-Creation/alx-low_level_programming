#include "main.h"
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 'a' + 'A';
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';
		}
	}
	return (s);
}
