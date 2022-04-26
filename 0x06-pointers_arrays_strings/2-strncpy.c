#include "main.h"
/**
 * _strncpy - Copy a string starting from index 0 of dest
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
