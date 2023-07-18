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
	int i = 0;
	int slen = 0;
	int start = 0;

	while (src[slen] != '\0')
		slen++;

	if (slen < n)
	{
		for (i = 0; i < n; i++)
			*(dest + i) = src[i];
		for (start = i; start < slen - i; start++)
			*(dest + start) = '\0';
	}
	return (dest);
}

