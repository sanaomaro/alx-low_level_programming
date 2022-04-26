#include "main.h"
/**
 *  _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: destination memory area to copy to
 * @src: source memory area tocopy from
 * @n: input n bytes to be copied
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);

}
