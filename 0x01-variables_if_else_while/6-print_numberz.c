#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the starting point a program that prints numbers using putchar
 * Return: Always return 0
 */

int main(void)

{
		int no;

		for (no = '0'; no <= '9'; no++)
		{
			putchar(no);
		}

		putchar('\n');

		return (0);

}
