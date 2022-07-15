#include "main.h"
/**
 * cap_string - capitalizes all  words of a string
 * @s: string that will be  modified
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char sp[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',\
	'(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (j = 0; sp[j] != '\0'; j++)
		{
			if (sp[j] == s[i])
			{
				break;
													}
		}
	return (s);
}
