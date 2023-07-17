#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to character
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++s;
		++len;
	}

	while (len != -1)
	{
		_putchar(*s);
		--s;
		--len;
	}
}

