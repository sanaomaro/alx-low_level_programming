#include "main.h"
/**
 * _memset - function fills memory with a constant byte.
 * @s: input pointer s
 * @b: input constant byte b
 * @n: input n bytes area to be filled
 * Return: Always 0 (Success)
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
