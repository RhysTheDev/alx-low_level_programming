#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print single digit numbers base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 48;

	while (start < 57)
	{
		putchar(start);
		start++;
	}
	putchar(10);
	return (0);
}
