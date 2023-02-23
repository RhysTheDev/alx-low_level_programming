#include "main.h"
/**
 * times_table - print the nine times table from zero
 *
 * Return: Null
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar( + r, i*j);
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}
}
