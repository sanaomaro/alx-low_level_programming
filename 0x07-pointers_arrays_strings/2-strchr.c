#include "main.h"
/**
 * _strchr - find the fisrtoccurance of 'c' character in a string,
 * @s: the input string.
 * @c: the character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	int counter;

	while(s[i])
	{
		i++;
	}
	for (counter = 0; counter <= i; counter++)
	{
		if(s[counter] == c)
		{
			s += counter;
			return(s);
		}
	}


	return ('\0');

}
