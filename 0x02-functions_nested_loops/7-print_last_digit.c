#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: number
 *
 *Return: last digit
 */

int print_last_digit(int n)
{
	int j = n % 10;

	_putchar('0' + j);
	return('0' + j);
}
