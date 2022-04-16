#include "main.h"
/**
 ** print_line - printn straight lines for @n times
 ** @n: the number of times to print a line
 ** Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
