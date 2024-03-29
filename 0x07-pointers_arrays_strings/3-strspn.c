#include "main.h"
/**
 * _strspn - searches for a prefix string and gets its location in a string
 *  @s: input string
 *  @accept: the prefix string
 *  Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i = 0, j, length = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				length++;
			}
			j++;
		}
		i++;
	}
	return (length);
}
