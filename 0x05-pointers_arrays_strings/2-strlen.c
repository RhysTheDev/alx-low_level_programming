#include "main.h"
/**
 * _strlen - return lenght of string
 * @s: character passed
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

