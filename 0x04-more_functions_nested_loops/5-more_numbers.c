#include "main.h"
/* more_numbers - printing number from 0 - 14 for 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;

	for(i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

