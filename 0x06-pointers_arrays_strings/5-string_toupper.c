#include "main.h"
/**
 * string_toupper - changeing letters of array from lowercase to uppercase
 * @c: array string
 * Return: uppercase string output
  */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0\;; i++)
	{
		if(c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
	return (c);
}
