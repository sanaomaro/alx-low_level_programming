#include <stdio.h>
/**
 * main - the starting point, this print numbers combinations from 0 to 9 range
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8';)
	{
		for (j = i+1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' && j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	i++;
	}
	putchar('\n');

	return (0);
}
