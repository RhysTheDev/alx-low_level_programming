#include "main.h"

/**
  * get_bit - calculates the value of a bit at a given index
  * @n: unsigned long value
  * @index: unsigned int
  *
  * Return: value of bit at index; Else -1
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
		return (0);

	return (-1);
}

