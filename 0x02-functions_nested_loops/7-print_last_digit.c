include "main.h"
/**
 * prints the last digit of a number
 * @n: the function's argument
 * Return: integer value the last digit
 */
int print_last_digit(int n)
{


	if (n < 0)
		n  = n * -1;

	_putchar((n % 10) + '0');

	return (n % 10);
}
