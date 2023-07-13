#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: number
 *
 *Return: last digit
 */

int print_last_digit(int n)
{
	int y;

	if (n < 0)
	n *= -1;
	y = n % 10;
	_putchar ('0' + y);
	return (y);
}
