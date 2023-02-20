#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase excl e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 97;

	while (start < 123)
	{
		if (start == 101)
			start++;
		else if (start == 113)
			start++;
		else
		{
			putchar(start);
			start++;
		}
	}
	putchar(10);
	return (0);
}
