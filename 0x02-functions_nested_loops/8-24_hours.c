#include "main.h"
/**
 * jack_bauer - function that prints all minutes in a day, 24 hours system
 * Return: 24 day's hours by minute for each line*
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');									_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');							_putchar('\n');
		}
	}
}
