#include "main.h"
/**
 * print_square - A function who print a square using #
 * @size: squareside 
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;
	int n = size;
	
	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
