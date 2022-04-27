#include "main.h"
/**
 * rot13 - encodes a string in rot13 cypher
 * @s: string to be encoded or rotated
 * Return: the resulting string after rotating 13 charachters
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + '13';
	}
	return (s);
}
