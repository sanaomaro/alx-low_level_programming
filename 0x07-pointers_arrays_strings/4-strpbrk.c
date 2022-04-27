#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - locating the first occurrance of string accept in string s
 * @s: input string
 * @accept: input substring
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');

}

