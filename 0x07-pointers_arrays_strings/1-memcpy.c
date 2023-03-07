#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * @s: pointer
 * @b: character to fill the memory
 * @n: size of memeory
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n);

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;

	char *ptr2 = s;


	for (; len < n; len++)
	{
		*s = b;
		s++;
	}

	return (ptr2);

}
