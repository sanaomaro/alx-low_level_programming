#include "main.h"
/**
 * printing alphabet in lower case - starting point
 * Return:0
 */

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
