#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to destination str
 * @src: pointer to source str
 * @n: integer
 *
 * Return: pointer to string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];
	return (dest);
}

