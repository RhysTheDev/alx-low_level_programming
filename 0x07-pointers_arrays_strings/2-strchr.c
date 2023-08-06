#include "main.h"
/**
 * _strchr - locates a char in a string
 * @s: pointer to str with char
 * @c: char to locate
 *
 * Return: if exists, pointer to first c, else NULL
 */
char *_strchr(char *s, char c)
{
	int start = 0;

	while (s[start] != c)
	{
		if (s[start] == '\0')
			return (NULL);
		start++;
	}
	return (&s[start]);
}

