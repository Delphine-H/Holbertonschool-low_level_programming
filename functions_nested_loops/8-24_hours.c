#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer.
 *
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	int h;
	int m;
	int lastdigith;
	int lastdigitm;
	int firstdigith;
	int firstdigitm;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			lastdigith = h % 10;
			firstdigith = h / 10;
			lastdigitm = m % 10;
			firstdigitm = m / 10;
			_putchar('0' + firstdigith);
			_putchar('0' + lastdigith);
			_putchar(':');
			_putchar('0' + firstdigitm);
			_putchar('0' + lastdigitm);
			_putchar('\n');
		}
	}
}
