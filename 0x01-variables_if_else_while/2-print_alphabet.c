#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
		char lower_char;
	
		for (lower_char = 'a'; lower_char <= 'z'; lower_char++)
			putchar(lower_char);
		printf("\n");
		return (0);

}
