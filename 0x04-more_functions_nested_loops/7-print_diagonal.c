#include "main.h"
/**
 ** print_diagonal - A function prints diagonal line n times
 ** @n: number of timesto print it
 ** Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');

	}
	}
	else
		_putchar('\n');

}
