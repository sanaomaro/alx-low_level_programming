#include "main.h"
/**
 * string_toupper - changeing letters of array from lowercase to uppercase
 * @c: array string
 * Return: uppercase string output
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}
	return (s);
}
