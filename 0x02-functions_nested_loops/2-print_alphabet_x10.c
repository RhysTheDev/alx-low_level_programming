#include "main.h"
/**
 * print_alphabet_x10 - print lower case alphabet x10
 *
 * Return: Null
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 1;

	while (j < 11)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
