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
	int start = 0;

	while (start < 10)
	{
		printf("%d", start);
		start++;
	}
	return (0);
}
