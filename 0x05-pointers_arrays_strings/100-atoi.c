#include <stdio.h>
/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: the integer result out ofthe  conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int unsign = 0;
	cahr c =0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			c = 1;
			unsign = unsign * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (c)
				break;
		}
		s++;
	}
	if (sign < 0)
		unsign = (-(unsign));
	return (unsign);

}
