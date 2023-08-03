#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: The binary string
  * Return: converted number; Else 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}

