#include "main.h"
/**
 * print_chessboard - printing an arry as a chess board
 * @a: the array
 * Return: nohing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
