#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 122;

	while (start > 96)
	{
		putchar(start);
		start--;
	}
	putchar(10);
	return (0);
}
