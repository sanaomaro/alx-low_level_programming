#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
		char charalpha;

		for (charalpha = 'a'; charalpha <= 'z'; charalpha++)
			putchar(charalpha);
		for (charalpha = 'A'; charalpha <= 'Z'; charalpha++)
			putchar(charalpha);
			printf('\n');
		return (0);
}
