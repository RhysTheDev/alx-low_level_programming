#include "main.h"

/**
 * jack_bauer - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int h = 0;
	int r = 0;
	int p;

	while (h < 10)
	{
		while (r <10)
		{
			p = h * r;
			if (p < 10)
			{
				_putchar('0' + p);
			}
			else if (p >= 10)
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
			if (r != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			r++;
		}
		r = 0;
		h++;
		_putchar('\n');
	}
}

