#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all combinations of single digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens = 48;
	int ones = 48;

	while (tens < 58)
	{
		while (ones < 58)
		{
			putchar(tens);
			putchar(ones);
			putchar(44);
			ones++;
		}
		ones = 48;
		tens++;
	}
	putchar(10);
	return (0);
}
