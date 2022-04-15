#include "main.h"
/**
 * print_square - A function who print a square using #
 * @side: squareside 
 * Return: nothing
 */

void print_square(int side)
{
	int i, j;
	int n = side;
	
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
