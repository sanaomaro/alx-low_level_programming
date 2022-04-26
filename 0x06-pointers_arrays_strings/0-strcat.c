#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
