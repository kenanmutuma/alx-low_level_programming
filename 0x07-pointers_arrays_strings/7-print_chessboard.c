#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
