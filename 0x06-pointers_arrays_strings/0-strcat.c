#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, n;

	while(dest[j])
		j++;

	for(n = 0; src[n]; n++)
	{
		dest[j++] = src[n];
		return (dest);
	}
}
