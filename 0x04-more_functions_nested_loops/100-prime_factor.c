#include "main.h"
/**
 ** prime_factor - prints the largest prime factor of the number 612852475143
 ** followed by a new line
 ** Return: 0
 */
void main(void)
{
	long int x = 612852475143;
	int j;
	
	while(j++ < x / 2)
	{
		if (x % j == 0)
		{
			x /= 2;
			continue;
		}
		for (j = 3; j < x / 2; j += 2)
		{
			if (x % j == 0)
			{
				x /= j;
			}
		}
	}
	printf("%ld\n", x);


	return (0);
}
