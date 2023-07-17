#include "main.h"
/**
 * _strcpy - copy string
 * @dest: pointer to buffer destination
 * @src: pointer to string being copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int start = 0;
	while (src[len] != '\0')
		len++;
	while (start < len)
	{
		*(dest + start) = src[start];
		start++;
	}
	return (dest);
}

