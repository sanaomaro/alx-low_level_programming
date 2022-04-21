#include "main.h"
/**
 * swap_int - swaping tow integers values
 * @a: input 1
 * @b: input 2
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
