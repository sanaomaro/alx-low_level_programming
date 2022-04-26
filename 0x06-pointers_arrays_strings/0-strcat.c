#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;
	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;
	while (src[b] != 0)
	{
		dest[a] = dest[a] + src[b];
		a++;
		b++;
	}
	return (dest);

}
