#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - number of bits to flip to get from one number to another
  * @n: number to flip
  * @m: index
  *
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = 0, val_two = 0;

	val = n ^ m;
	while (val)
	{
		if (val & 1)
			val_two++;

		val >>= 1;
	}

	return (val_two);
}
