#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to character
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');

}

