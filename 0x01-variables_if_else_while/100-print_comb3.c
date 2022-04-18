#include <stdio.h>
/**
 * main - the starting point, this print numbers combinations from 0 to 9 range
 * Return: 0
 */
int main(void)

{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j == '9' && i == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}
