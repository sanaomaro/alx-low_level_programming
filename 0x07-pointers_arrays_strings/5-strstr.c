#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in heystack
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)

{
	char *hay;
	char *ponitneedle;

	while (*haystack != '\0')
	{
		hay = haystack;
		pointneedle = needle;

		while (*haystack != '\0' && *pointneedle != '\0' && *haystack == *pointneedle)
		{
			haystack++;
			pointneedle++;
																					}
		if (!*pointneedle)
			return (hay);
		haystack = hay + 1;
	}
	return (0);

}
