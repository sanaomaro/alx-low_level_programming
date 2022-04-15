#include "main.h"
/* prime_factor - function to prints the largest prime factor of the number 612852475143, followed by a new line
 * Return: 0
 */
void main()
{
	long int i, j, largest, x = 612852475143;
	int prime;

	for (i = 2; i < x / 2; i++)
	{
		prime = 1;
		if (x % i == 0)
			largest = x / i;
		for (j = 2; j < largest / 2; j++)
			if (largest % j == 0)
			{
				prime = 0;
				break;
			}
		if (prime)
		{
			printf("%ld\n", largest);
			break;
		}
	}
	return (0);
}
