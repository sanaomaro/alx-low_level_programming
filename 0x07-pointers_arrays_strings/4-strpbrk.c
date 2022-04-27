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
	unsigned int i = 0, j, length = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (s[j] == ccept[i])
			{
				length += j;
				return(length);
			}
			j++;
		}
		i++;
	}
	return ('\0');

}

