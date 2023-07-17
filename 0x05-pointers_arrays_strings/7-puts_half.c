#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: pointer to a char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int midway = 0;
	int n = 0;

	while (str[len] != '\0')
		len++;

	if (n % 2 != 0)
		midway = (len -1) / 2;
	else
		midway = len / 2;

	while (midway < len)
	{
		_putchar(str[midway]);
		midway++;
	}
	_putchar('\n');
}

