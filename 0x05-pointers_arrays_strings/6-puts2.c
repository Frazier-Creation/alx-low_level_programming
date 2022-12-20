#include "main.h"
#include <string.h>

/**
 * prints_character_of_a_string - followed by a new line
 *
 * Return : 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
