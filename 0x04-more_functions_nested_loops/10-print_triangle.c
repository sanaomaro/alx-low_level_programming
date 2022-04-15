#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: number of lines
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (j--; j <= size; j++)
			{
				_putchar(35);
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
}
