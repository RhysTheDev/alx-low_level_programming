#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Null
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
