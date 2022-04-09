#include <stdio.h>
/**
 * main - Entry point, this program print numbers with spaces
 * Return: 0
 */

int main(void)

{
	int i;
	int j;

	for (i = '0'; i <= '9';i++)
	{
	for(j='0'; j <='9'; j++)
	{
		putchar(i);
		putchar(j);
		if (i != '9' && j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);

}
