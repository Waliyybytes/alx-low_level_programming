#include <string.h>
#include "main.h"

/**
 * print_chessboard - to print  chessboard
 *
 * @a: an array of array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (a[i][8])
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
		i++;
	}
}

