#include "main.h"

/**
  * flip_bits - calculates number of bits to get to the neit number
  * @n: unsigned long number
  * @m: unsigned long number
  *
  * Return: unsigned int
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long count = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			count++;

		i >>= 1;
	}

	return (count);
}

