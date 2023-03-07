#include "main.h"

/**
  * _strchr- locates the character in a string
  *@s: pointer to a character
  *@c: character
  *Return: pointer to the first occurrence of character c, else NULL
  */

char *_strchr(char *s, char c);

char *_strchr(char *s, char c)
{
	char *ptr = '\0';

	while (*s >= '\0')
	{
		if (*s == c)
		{
			ptr = s;
			break;
		}
		s++;
	}

	return (ptr);
}
