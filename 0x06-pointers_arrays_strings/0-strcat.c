#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination, pointer to char
 * @src: source str, pointer to char
 *
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int slen = 0;
	int dlen = 0;
	int i;

	while (src[slen] != '\0')
		slen++;

	while (dest[dlen] != '\0')
		dlen++;

	for (i = 0; i < slen; i++)
	{
		*(dest + dlen + i) = src[i];
	}
	*(dest + dlen + i) = '\0';

	return (dest);
}

