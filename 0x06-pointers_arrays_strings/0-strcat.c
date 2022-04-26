#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, a, b = 0;

	while (1)
	{
		if (*(dest + i) == '\0')
			break;
			i++;
	}
	while (1)
	{
		if (*(src + j) == '\0')
			break;
			j++;
	}
	for (a = i; a < i + j; a++)
	{
		*(dest + a) = *(src + b);
		b++;
	}
	*(dest + a) = '\0';
	return (dest);
}
