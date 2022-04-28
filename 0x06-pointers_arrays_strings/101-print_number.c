#include "main.h"
/**
 * print_number - Prints integers as characters
 * @n: Integer to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x = n;
	unsigned int i = n;
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
		i = -n;
	}
	while (x >= 10)
	{
		x = x / 10;
		d = d * 10;
	}
	while (d > 0)
	{
		_putchar(i / d % 10 + '0');
		d = d / 10;
	}
}
