#include "main.h"
/**
 * _isalpha - a function that checksif @c an alphabetic character
 * @c: character input
 * Return: 1 if c is a letter whether lower or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
