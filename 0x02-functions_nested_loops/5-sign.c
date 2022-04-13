#include "main.h"
/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */
int print_sign(int n)
{
	int p;

	if (n > 0)
	{
		p = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		p = 0;
		_putchar('0');
	}
	else
	{
		p = -1;
		_putchar('-');
	}
	return (p);
}

