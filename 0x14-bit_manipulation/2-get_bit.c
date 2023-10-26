#include "main.h"

/**
  * get_bit - Get the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: ...
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cmp = 0;

	while (n)
	{
		if (cmp == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		cmp++;
	}

	if (index > cmp && index < 63)
		return (0);

	return (-1);
}
