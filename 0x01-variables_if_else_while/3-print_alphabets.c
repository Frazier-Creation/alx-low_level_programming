#include <stdio.h>
/**
 * main -prints alphabet in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char f;
	char e;

	f = 'a';
	e = 'A';
	while
		(f <= 'z') {
			putchar(f);
			f++;
		}
	while
		(e <= 'Z') {
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}
