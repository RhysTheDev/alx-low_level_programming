#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: pointer to int
 * @n: int elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < (n - 1))
		printf("%d, ", a[i++]);
	printf("%d\n", a[i]);
}

