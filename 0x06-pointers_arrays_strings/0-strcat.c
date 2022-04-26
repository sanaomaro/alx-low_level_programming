#include "main.h"
/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 * Return: char pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int srcLen = 0;
	int counter = 0;
	char *tempoutput = dest;
	char *temp = src;

	while (*dest)
		dest++;
	while (*src++)
		srcLn++;
	while (counter < srcLen)
	{
		*dest++ = *temp++;
		counter++;
	}
	*dest = '\0';
	return (tempoutput);

}
