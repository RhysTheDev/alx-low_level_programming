#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: char pointer to mem destination
 * @src: char pointer to men source
 * @n: unsigned int number of bytes being copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int start;

	for (start = 0; start < n; start++)
		dest[start] = src[start];

	return (dest);
}

