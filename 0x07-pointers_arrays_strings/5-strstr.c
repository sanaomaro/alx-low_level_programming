#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in heystack
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
	int i= 0, j = 0;

	while (haystack[i])
	{

		while (needle[j])
		{
			if (haystack[i +j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');

}
