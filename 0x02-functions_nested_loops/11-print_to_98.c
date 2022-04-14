#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all numbers from n to 98
 * in both cses when @n is > or < 98
 * @n: the starting number
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
		{
			while (n >= 98)
			{
				printf("%d", n);
				if (n != 98)
				{
					printf(", ");
				}
				n--;
			}
		}
	else
		{
			printf("98");
		}
	printf("\n");
}
