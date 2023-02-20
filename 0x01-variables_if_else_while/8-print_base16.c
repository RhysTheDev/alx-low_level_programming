#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 48;
	int second_start = 97;

	while (start < 58)
	{
		putchar(start);
		start++;
	}

	while (second_start < 103)
	{
		putchar(second_start);
		second_start++;
	}
	putchar(10);
	return (0);
}
