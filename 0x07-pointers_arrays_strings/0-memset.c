#include "main.h"

/**
 * _memset - fills memory with const byte
 * @s: pointer to location where bytes are stored
 * @b: constant char byte
 * @n: unsigned int number of bytes
 *
 * Return - pointer to memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int start;

	for (start = 0; start < n; start++)
		*(s + start) = b;

	return (s);

}

