#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - the sum of diagonals
 * @a: input array
 * @size: input size of array
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, total1 = 0, total2 = 0;

	for (i = 0; i < size; i++)
	{
		total1 += a[size + 1] * i;
		total2 += a[size - 1] * (i + 1);
	}
	
	printf("%d, %d\n", total1, total2);

}
