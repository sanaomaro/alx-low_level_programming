#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for(i = 0; dest[i] != '\0'; i++)
		;

	for(j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
