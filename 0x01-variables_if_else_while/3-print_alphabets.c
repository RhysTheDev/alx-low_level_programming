#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase then upper
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 97;
	int second_start = 65;

	while (start < 123)
	{
		putchar(start);
		start++;
	}

	while (second_start < 91)
	{
		putchar(second_start);
		second_start++;
	}
	putchar(10);
	return (0);
}
