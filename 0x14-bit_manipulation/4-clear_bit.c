#include "main.h"

/**
	* clear_bit - sets the value of a bit to 0 at a given index
	* @n: unsigned long number to modify
	* @index: unsigned int index
	*
	* Return: 1 if successful, else -1
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}

