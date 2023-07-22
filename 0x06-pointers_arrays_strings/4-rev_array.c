#include "main.h"
/**
 * reverse_array - reverses integers in an array
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int mid = 0;
	int i = 0;
	int j = 0;

	mid = n / 2;
	while (i < mid)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}

