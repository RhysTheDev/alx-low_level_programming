#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: integer starting point
 *
 * Return: Null
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d, ", n);
		n++;
	}
}
