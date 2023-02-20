#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 97;

	while (start < 123)
	{
		putchar(start);
		start++;
	}
	putchar(10);
	return (0);
}
