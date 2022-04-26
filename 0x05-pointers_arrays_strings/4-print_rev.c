#include "main.h"
/**
 * print_rev - prinntin a string, in reverse
 * @s: str input
 * Return: reversed string
 */
void print_rev(char *s)
{
	int counter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (n = (counter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');

}
