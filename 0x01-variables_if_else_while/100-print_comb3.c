#include <stdio.h>

/**
 * main- Entry point
 *
 * Description- Prints all possible combinations of single-digit numbers
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i, k, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = j; k < 10; k++)
		{
			if (i != k)
			{
				putchar(i + '0');
				putchar(k + '0');
				if (i == 8 && k == 9)
				{
				}
				else
				{
					putchar(',');
					putchar(32);
				}
			}
		}
		j++;
	}
	putchar('\n');
	return (0);
}
