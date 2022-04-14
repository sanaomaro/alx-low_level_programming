#include <stdio.h>
#include <stdlib.h>
/**
 * main - to printsum of all numbers under 1024 that are multiple of 3 or 5
 * return: 0 success
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
		sum = sum + i;
		}
	}
	printf("%i\n", sum);
	return (0);
}
