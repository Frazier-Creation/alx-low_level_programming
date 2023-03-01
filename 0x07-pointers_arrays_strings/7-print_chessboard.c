#include "main.h"
#include <stdio.h>

/**
 * _print_chessboard - a function that prints the chessboard.
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_memset("%c ", a[i][j]);
		}
		_memset("\n");
	}
}
