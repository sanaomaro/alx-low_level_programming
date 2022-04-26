#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string that is to reverse
 * Return: output string in reverse
 */
void rev_string(char *s)
{
	char revs = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		revs = s[i];
		s[i] = s[counter];
		s[counter] = revs;
	}

}
