#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: Second string
 * @n: number of bytes from src
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d = 0;

	while (dest[d] != '\0')
		d++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[d] = src[i];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}

