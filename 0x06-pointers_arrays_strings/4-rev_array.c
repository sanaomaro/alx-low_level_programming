#include "main.h"
/**
 * reverse_array - reverse an array of integers contents
 * @a: array of integers
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < (n / 2); i++)
	{
		rev = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}
