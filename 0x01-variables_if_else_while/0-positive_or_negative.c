#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This is the main entry point
 *
 * Description: Shows if the number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is positive", n);
	putchar(10);
	return (0);
}
