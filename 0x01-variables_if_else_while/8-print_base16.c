#include <stdio.h>
/**
 * main - the staring ppoint
 * Return: 0
 */

int main(void)

{
	char ch1;
	char ch2;

	for (ch1 = '0'; ch1 <= '9'; ch1++)
		putchar(ch1);

	for (ch2 = 'a'; ch2 <= 'f'; ch2++)
		putchar(ch2);

	putchar('\n');


	return (0);

}
